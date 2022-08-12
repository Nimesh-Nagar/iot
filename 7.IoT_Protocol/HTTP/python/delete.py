import requests
import json

URL = 'https://sleepy-island-07017.herokuapp.com/sensor' """ for delete enter /users/me instead of /sensor"""
auth={'Content-Type' : 'application/json','Authorization':'Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2Mjk4Y2EzNzg0NGFhZTAwMTdhOTBmMmIiLCJpYXQiOjE2NTQxODA0MDh9._6dxbYjFORaykQTBL5KqnZ9YFSUOG2alOTAnxzvxSLM'}
result=requests.delete(URL,headers=auth)

