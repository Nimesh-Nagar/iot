#Dictionary
#->Key must be unique
#empty dictionary
d = {}
#Syntax:
#{key:value,key:value,key:value}
#Dictionary
s1 = {
	"name" : "Tushar",
	"prn" : 30,
	"phone" : "7738954122",
	"dob": "18/11/1998",
	"state": "MH",
	"city" : "Mumbai"
}

#length
print("Length : ",len(s1)) #How many key:value pair

#print
print(s1)

#Access every element
print(s1["name"])
print(s1["phone"])

#Change value of key
s1["state"] = "Bihar"
print(s1)

#Add new data
s1["email"] = "tusharjv@outlook.com"
print(s1)

#Remove data from dictionary
s1.pop("city")
print(s1)
del s1["state"]
print(s1)

#loops
for i in s1.keys():
	print("keys: ",i)

for i in s1.values():
	print("values :",i)


for i,j in s1.items():
	print(i, " -> ",j)


#Check a key is present or not
if "name" in s1 :
	print("Key is in dictionary")
else :
	print("Not present")


#Delete a dictionary
del s1


















