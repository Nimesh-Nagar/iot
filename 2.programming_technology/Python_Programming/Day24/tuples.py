#Immutable
#Can store any kind of data
t = ("Sid","1",1,324.412)
#	0   1  2    3
#       -4  -3  -2  -1

#print the tuple
print(t)

#len of tuple
print("Length : ",len(t))

#Access every element
print("t[0] :",t[0])
print("t[1] :",t[1])
print("t[-1] : ",t[-1])
#Modify value
#t[1] = 61287361872 #not possible

#tuple slicing
print("t[0:1] -> ",t[:2])
print("t[2:] -> ",t[2:])
print("t[1:-1] -> ",t[1:-1])

#Step:
print("t[1:-1:2] -> ",t[1:-1:2])
print("t[::-1] -> ",t[::-1])
print(t)
t[::-1]

for i in t:
	print("Value : ",i)

if "1" in t :
	print("Found")
else :
	print("Not found")

#if you want to change tuple redeclRE
t = ("Sid","1",1.5)
tu = "Siddhant", #creating typle
print(tu)
x="Siddhant","Anubhav"
print(x)
num=1,2,3,4,65,7,8












