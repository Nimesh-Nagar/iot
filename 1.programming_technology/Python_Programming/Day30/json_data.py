import json

with open("student.json","r+") as fd:
	data = fd.read()
	print(data)
	print(type(data))
	std = json.loads(data) #Converting to Dictionary
	print(std)
	print(type(std))
	temp = {"name":"Siddhant","prn":"424234"}
	std["newData"] = temp
	print(std)
	str_data = json.dumps(std) #Converting to JSON	
	print(str_data)
	print(type(str_data))
	fd.write(str_data)
