import json
import chromadb
from langchain.embeddings import OllamaEmbeddings

# Load custom data
with open("custom_knowledge.json", "r") as file:
    custom_data = json.load(file)

# Initialize ChromaDB
client = chromadb.PersistentClient(path="./chroma_db")
collection = client.get_or_create_collection(name="custom_knowledge")

# Initialize Ollama embedding model
embed_model = OllamaEmbeddings(model="gemma")

# Store Data in ChromaDB
for doc in custom_data:
    embedding = embed_model.embed_query(doc["content"])
    collection.add(
        ids=[doc["title"]],
        embeddings=[embedding],
        metadatas=[{"content": doc["content"]}]
    )

print("Custom data stored successfully in ChromaDB.")
