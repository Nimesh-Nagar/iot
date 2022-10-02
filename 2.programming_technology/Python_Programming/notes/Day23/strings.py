#String operations

name="Siddhant"
#     01234567 #positive index 0,1,2,
#     87654321 #negative index -1,-2,-3
#length of string
print(len(name)) 

#Access string Index
print(name[0]) #S
print(name[5]) #a
#name[0] = 'A' #Invalid operation
#Cannot modify the index value
#String is read only(immutable)
print(name[-3])

#String Slicing
print(name[2:4])
#variable[start_index:end_index]
#end_index is excluded
print(name[2:6])
print(name[:3]) #no need to mention 0
print(name[5:]) #no need to mention last index
print(name[1:-3]) #direction of fetch is forward
print(name[-3:])
print(name[:]) #whole string
#variable[start_index:end_index:step]
print(name[1:7:2])
#print(name[1:7:0]) #error
print(name[1:7:-1])
print(name[5:1:-1])
print(name[5:1:-2])
print(name[-4:-7:-1])
print(name[::-1]) #reverse whole string


for i in name:
	print(i)

for i in name[1:7]:
	print(i,end="\t")
print("\n")


#variable.funciton()
x=name.upper() #Converts to upper case
print(x)
x=name.lower() #Converts to the lower case
print(x)
name.isupper() #returns true  if string is in upper case
name.islower() #returns true if string is in lower case
print(name.startswith("Si")) #Returns true if string start with given string
name.endswith("nt") #retuns true if string end with given string
name.isdigit() #returns true if string is digit "10"
name.isalpha() #returns true if string is alphabet
name.title() #returns string with first letter in uppercase
























