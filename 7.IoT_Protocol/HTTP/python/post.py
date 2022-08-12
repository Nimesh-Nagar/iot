
import requests
import json
import time
import random

URL = 'https://sleepy-island-07017.herokuapp.com/sensor' # to wich data is send

# for authuntication 
API_KEY='j18jtXQXS1jQXte'   
TOKEN='eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MmExZTk4YmZjOGQxOTAwMTcwMGY5OGMiLCJpYXQiOjE2NTUzMDE2Mjd9.16WfbLZfVElmUhKfMBBZ1wg09dPn-Xlrer9EBOv7pzY'

def sendRequest(body):
    body['API_KEY']=API_KEY
    payload=json.dumps(body)
    auth={"content-type":"application/json","Authorization":"Bearer "+TOKEN}

    result = requests.post(URL,data=payload,headers=auth) # post method
    
    # output
    print(result)
    print("STATUS CODE: ",result.status_code)
    print("URL",result.url)

while True:
   # currentData = random.randint(60,150)
    time.sleep(2)
    body={  
        "API_KEY": API_KEY,
        "type":"Practice",
        "tag":"ESP_32",
        "value":65,
        "unit":"*C"
    }
    sendRequest(body)




