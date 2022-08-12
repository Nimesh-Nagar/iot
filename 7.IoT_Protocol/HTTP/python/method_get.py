
import requests
import json

#response = requests.get("https://api.thingspeak.com/channels/1758455/feeds.json?api_key=4FYMXRF9VVLNY1Z2&results=2")
response =requests.get("https://sleepy-island-07017.herokuapp.com/sensor",
headers={
    "Content-Type":"applcation/json",
    "Authorization":"Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MmExZTk4YmZjOGQxOTAwMTcwMGY5OGMiLCJpYXQiOjE2NTUxNDg1MzZ9.B9UF9zBXhz63ca7_vo1usiJtr0pxpb9nn_qZ60uqrYY"

}) 

print("STATUS CODE: ",response.status_code)
print("URL",response.url)
# print content of request
print(json.loads(response.content))
#print(response.content)


