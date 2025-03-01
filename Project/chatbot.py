import ollama
import chromadb
from langchain.embeddings import OllamaEmbeddings

# Initialize database and embedding model
client = chromadb.PersistentClient(path="./chroma_db")
collection = client.get_collection(name="custom_knowledge")
embed_model = OllamaEmbeddings(model="gemma")

# Function to retrieve knowledge
def retrieve_knowledge(query):
    query_embedding = embed_model.embed_query(query)
    results = collection.query(
        query_embeddings=[query_embedding],
        n_results=3  # Get top 3 relevant documents
    )
    knowledge = "\n".join([doc["content"] for doc in results["metadatas"] if "content" in doc])
    return knowledge

# Chat function with RAG
def chat_with_gemma(query):
    relevant_knowledge = retrieve_knowledge(query)
    prompt = f"Use the following knowledge to answer the query:\n\n{relevant_knowledge}\n\nUser Query: {query}"

    response = ollama.chat(model="gemma", messages=[{"role": "user", "content": prompt}])
    return response['message']['content']

# Start Chat
while True:
    user_input = input("You: ")
    if user_input.lower() in ["exit", "quit"]:
        break
    response = chat_with_gemma(user_input)
    print(f"Gemma: {response}")
