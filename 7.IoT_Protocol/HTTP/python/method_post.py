import requests
import random

random_num = random.randint(60,191)

payload = {   
    "api_key": "VIK5XGE4D5VZFQRB",
    "field1" : "90",
    "field3" : random_num

}

result = requests.post("https://api.thingspeak.com/update",data=payload)


print("STATUS CODE: ",result.status_code)
print("URL",result.url)
# print("",r.text)
print(f"Random Number : ",random_num)









