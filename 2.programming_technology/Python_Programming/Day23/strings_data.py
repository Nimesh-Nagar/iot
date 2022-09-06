#multiline string
data="This is siddhant" #single line string
""" strings"""
'''strings'''
data="""The internet of things, or IoT, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction."""

#find function returns -1 if string is not found
substr = input("Enter substring to find in paragraph:")
if(data.find(substr) != -1):
	print("Sub String found")
else:
	print("Substring not found")

#Print all the data after substring
idx=data.find(substr) 
if(idx != -1):
	print(data[idx:])
else:
	print("Substring not found")

