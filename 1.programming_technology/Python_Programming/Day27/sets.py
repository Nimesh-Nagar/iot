#Sets
#It will hold only unique elements
#Set is unorderd
s = {"Siddhant","Tushar","Abdur","Abhishek","Siddhant"} 
#Print
print(s)

#Convert objects to set
set()

t = {"Siddhant","Kiran","Aditya","Ganesh"}
x = {"Nancy","Payal","Snehal","Vinita"}
y = {"Snehal","Vinita"}

print(t.intersection(s))
print(t.union(s))
print(t.difference(s))
print(t.symmetric_difference(s))

print(t.issubset(x))
print(x.issuperset(y))
print(x.isdisjoint(s))
print(s.remove("Abhishek")) #It is not returning removed element
print(s.pop()) #It is returning removed element
print(s)

z = t.symmetric_difference(s) #Returns seperate set
t.symmetric_difference_update(s)
print(t)
print(s)
t = {"Siddhant","Kiran","Aditya","Ganesh"}
t.difference_update(s)
print(t)
print(s)
t.intersection_update(s)
print("_______________________________________________")
s = {"Siddhant","Tushar","Abdur","Abhishek","Siddhant"}
t = {"Siddhant","Kiran","Aditya","Ganesh"} 
#Loop
for i in s:
	print(i)

print("Tushar" in s)
print(len(s))
#print(s + t)
print(s > t) #By length
print(s < t)

#Add data to the set
t.add("Sid")
print(t)

s= {} #Empty dictionary
s = set() #Empty set
#List in set:
#s = {["10", 20],["30","40"],["50","123"]}




















