#3.Write a code to convert substring next 5 character to upper case and print on terminal

data="""The internet of things, or IoT, is a system of interrelated computing devices, mechanical and digital machines, objects, animals or people that are provided with unique identifiers (UIDs) and the ability to transfer data over a network without requiring human-to-human or human-to-computer interaction."""

substr=input("Enter the substring :")
idx = data.find(substr)	# it returns index number of string, if does not match then returns -1
print("Index value of string : ",idx)

if(idx != -1):	
	temp=data[idx+6:idx+11]
	print("Next 5 character in upper case are : ",temp.upper())

else:
	print("Substring Not present")
	
	

