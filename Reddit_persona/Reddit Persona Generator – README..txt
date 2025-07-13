Reddit Persona Generator – README.
📌Overview
This tool analyzes a Reddit user's public posts and comments to generate a detailed persona using an LLM (via Ollama). It extracts age group, profession, interests, political views, and personality traits with citations from Reddit activity.

⚙️Requirements
Python
Python 3.8 or higher

Python Packages
Install dependencies using pip:
pip install praw

Ollama
Install Ollama from https://ollama.com

Make sure the model you're using (e.g., gemma3:4b ) is downloaded:


🔐Reddit API Setup
Go to https://www.reddit.com/prefs/apps

Click “Create App” or “Create Another App”

Fill out:

Name: RedditPersona

App type: script

Redirect URI: http://localhost:8080 (not used but required)

After creation:

Copy the client ID (under the app name)

Copy the client secret (shown as secret)

Configuration
Open Reddit_persona.py and update these values:

REDDIT_CLIENT_ID = 'your_client_id'  #replace value from profile of developer
REDDIT_CLIENT_SECRET = 'your_client_secret'   ##replace value from profile of developer
REDDIT_USER_AGENT = 'script:RedditPersona:v1.0 (by u/your_username)'


🚀 How to Run
python Reddit_persona.py
You’ll be prompted to enter a Reddit profile URL:
https://www.reddit.com/user/kojied/ 
or 
https://www.reddit.com/user/Hungry-Move-6603/

The script will:

1.Fetch recent posts and comments

2.Build a prompt for the LLM

3.Query the model via Ollama

4.Save the persona to a .txt file

📁 Output
