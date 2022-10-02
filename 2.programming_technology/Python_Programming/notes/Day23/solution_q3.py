data="""The internet of things, or IoT, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction."""

substr = input("Ente substring") 
idx = data.find(substr)
if(idx != -1):
	temp=data[idx:idx+6]
	print(temp.upper())
#	data[idx:idx+6].upper()
else:
	print("Substring Not present")


a = "10"

if a.isdigit():
	print("This string contains digit")
else:
	print("no digits in the string")

if a.isalpha():
	print("This string contains alphabet")
else:
	print("no alphabet in the string")
