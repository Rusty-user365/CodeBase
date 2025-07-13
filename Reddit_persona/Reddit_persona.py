import praw
import json
from datetime import datetime
import subprocess
from prawcore.exceptions import ResponseException

# -------- Configuration -------- #
REDDIT_CLIENT_ID = 'qEzmE0V6WGGWsTjgVzxmzQ'           
REDDIT_CLIENT_SECRET = 'NxJ4L7AppbP0okYVkzVU8Xmg2YLKqA'  
REDDIT_USER_AGENT = 'script:RedditPersona:v1.0 (by u/your_username)'  
OLLAMA_MODEL = 'gemma3:4b'
POST_LIMIT = 100
COMMENT_LIMIT = 100
# -------------------------------- #

def init_reddit():
    return praw.Reddit(
        client_id=REDDIT_CLIENT_ID,
        client_secret=REDDIT_CLIENT_SECRET,
        user_agent=REDDIT_USER_AGENT
    )

def get_user_data(username):
    reddit = init_reddit()
    user = reddit.redditor(username)

    posts = []
    comments = []

    try:
        for post in user.submissions.new(limit=POST_LIMIT):
            posts.append({
                "title": post.title,
                "text": post.selftext,
                "subreddit": post.subreddit.display_name,
                "url": f"https://www.reddit.com{post.permalink}",
                "created": datetime.utcfromtimestamp(post.created_utc).isoformat()
            })

        for comment in user.comments.new(limit=COMMENT_LIMIT):
            comments.append({
                "body": comment.body,
                "subreddit": comment.subreddit.display_name,
                "url": f"https://www.reddit.com{comment.permalink}",
                "created": datetime.utcfromtimestamp(comment.created_utc).isoformat()
            })

    except ResponseException as e:
        print("❌ Reddit API authentication failed or user data is inaccessible.")
        print("Details:", e)
        exit(1)

    return posts, comments

def build_prompt(posts, comments):
    prompt = "You are an expert in analyzing online activity to generate user personas.\n"
    prompt += "Based on the following Reddit posts and comments, build a persona including: age group, profession, interests, political views, personality traits.\n"
    prompt += "Cite the Reddit link after each trait using evidence from the posts/comments.\n\n"

    prompt += "POSTS:\n"
    for p in posts[:10]:  # Use only top few for prompt length
        prompt += f"[{p['subreddit']}] {p['title']}\n{p['text']}\nURL: {p['url']}\n\n"

    prompt += "COMMENTS:\n"
    for c in comments[:10]:
        prompt += f"[{c['subreddit']}] {c['body']}\nURL: {c['url']}\n\n"

    return prompt

def query_ollama(prompt):
    result = subprocess.run(
        ["ollama", "run", OLLAMA_MODEL],
        input=prompt.encode('utf-8'),
        stdout=subprocess.PIPE
    )
    return result.stdout.decode('utf-8')

def save_persona(output, username):
    filename = f"{username}_persona.txt"
    with open(filename, "w", encoding="utf-8") as f:
        f.write(output)
    print(f"✅ Persona saved to {filename}")

def extract_username_from_url(url):
    return url.strip('/').split('/')[-1]

# ---------- Main ---------- #
if __name__ == "__main__":
    url = input("🔗 Enter Reddit profile URL: ").strip()
    username = extract_username_from_url(url)

    print(f"🔍 Fetching data for: {username}")
    posts, comments = get_user_data(username)

    print("🧠 Building prompt...")
    prompt = build_prompt(posts, comments)

    print("🤖 Querying Gemma via Ollama...")
    output = query_ollama(prompt)

    save_persona(output, username)
