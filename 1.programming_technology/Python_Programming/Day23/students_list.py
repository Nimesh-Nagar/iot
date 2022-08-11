std=[] #Empty list

data = input("Enter name:")
std.append(data) #adding data to the list

print(std) #display

data = input("Enter name:")
std.remove(data) #Removing data element from the list

std = std + ["Aditya","Kiran"]
inp = input("Search name :")
if inp in std:
	print("Presnt in the list")


