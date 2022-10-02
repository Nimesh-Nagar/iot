#Formatted string:
a=10
s = "This is a data a = {}".format(a)
print(s)
name= "Siddhant"
a = 10
s = "This is a data a = {} and name = {}".format(a,name)
print(s)

s = "This is a data a = {1} and name = {0}".format(a,name)
print(s)

s = "This is a data a = {x} and name = {y}".format(x=a,y=name)
print(s)
s="This is a data a = "+ str(a) +" and name ="+ name

s="This is data "+str(a)
s = f"This is data {a} and name = {name}"
print(s)

name = "Siddhant"
x = 100
string = "My Name is : "+name +"and my salary is +"+str(x)
string = "My Name is : {} and my salary is {}".format(name,x)
print(string)
string = "My Name is : {1} and my salary is {0}".format(name,x)
print(string)
string = "My Name is : {a} and my salary is {b}".format(a=name,b=x) #We cannot use indexing
print(string)

s = f"This is data {name} and name = {x}"
print(s)









 


