"""
lst = ["Tushar","Siddesh","Kiran","Aditya"]
#lst.sort(reverse=0)
lst.sort(key=lambda i: i[1])
lst.sort(key=lambda i: i[2])
lst.sort(key=lambda i: i[2:])
print(lst)
lst.sort(key=lambda i: i[2:].upper())
print(lst)

lst1 = ["Shurakh","Abhishek","Nimesh"] 
lst1.sort(key=lambda i: i[2:])
print(lst1)

lst1 = [{"prn":4, "name":"Shurakh"},{"prn":2, "name":"nimesh"},{"prn":10,"name":"Abhishek"}]
#lst1.sort(key=lambda i: i["prn"])	#short on basis of Prn in disctionary
#lst1.sort(key=lambda i: i["name"])
#print(lst1)

sorted(lst1,key=lambda i: i["name"])
print(lst1)


# map and filter
lst =[10,20,304,40,50,60,70]
sqr[]
for i in lst
	sqr.append(i*i)
	
"""

lat = ["Tushar","Siddhesh","kiran","Aditya"]
l= list(map(lambda i : i[-2:], lat))
print(l)


