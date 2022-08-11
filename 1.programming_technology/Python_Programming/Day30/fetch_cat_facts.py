import requests

data = requests.get("https://cat-fact.herokuapp.com/facts/random")
d = data.json()
print(d)
print(d["text"])

