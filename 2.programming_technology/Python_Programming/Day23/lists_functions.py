#Lists
#List of student names
lst=[1,2,3,1.324324,"Sid"]
lst=[1,2,["Sid","xyz"],4.6]

std = ["Tushar","Abdur","Abhishek","Sundram"]
#        0         1       2         3
#	 -4        -3      -2        -1

#Print the list
print(std)

#Length of list
print(len(std))

#Acces elements of list
print(std[0])
print(std[3])
print(std[-1])
std[0] = "Aditya"

#Slice
print(std[1:3])
print(std[:3])
print(std[2:])
print(std[1:-1])
#Step syntax:
print(std[::2])
print(std[-2:0:-1])

#Append data to list
std.append("Aman") #Always append at the end
print(std)

#Delete data from the list
std.pop() #Delete data from the end
print(std)

std.remove("Abdur") #Remove the data from any index
print(std)


#List concatination:
sts = ["Kiran","Vivek","Nancy"]
lst=sts + std
print(std)
print(sts)
print(lst)


#loop on the list
for i in std:
	print("Name : ", i)

std.reverse()
print(std)
std.sort()
print(std)
print(std.index("Aditya")) #Index of given value

print(std == sts )
print(std != sts)
print(std > sts)
print(std < sts)

















