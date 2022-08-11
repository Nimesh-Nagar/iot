#def add(a,b):
#	return a + b


#Only one expression
#Any number of arguments

add=lambda a,b : a + b
x = add(b=10,a=30)

add = lambda a,b : a + b
y = add(10,20)
add(x,y)

lst = ["10","20","30,20",["Sid","Anubhav"],("Tushar","Vivek"),{"name" : "Siddhant"}]

get_value = lambda i : lst[i][0] #lst[1][0] -> "20"[0] -> 2
get_value(1) #2

get_value = lambda i,j : lst[i][j] #lst[2][4] -> "30,20"[4] -> 0
get_value(2,4) #0

lst = ["Tushar","Siddhesh","Kiran","Aditya"]
lst.sort(reverse=0)
lst.sort(key=lambda i : i[2])
print(lst)

lst.sort(key=lambda i : i[2:].upper() )
print(lst)

lst=[{"prn":10,"name":"Siddhant"},{"prn":4,"name":"Verma"},{"prn":7,"name":"Sundram"}]
#lst.sort(key=lambda i : i["prn"])
#print(lst)
#lst.sort(key=lambda i : i["name"])
#print(lst)
sorted(lst,key=lambda i : i["name"])
print(lst)

lst = [10,20,304,50,60,70]

#for i in lst:
#	l.append(i*i)	

def sqr(i):
	return i*i

l = map(lambda  i : i*i , lst)
l = map(sqr , lst)
print(list(l))

lst = ["Tushar","Siddhesh","Kiran","Aditya"]
l = list(map(lambda  i : i[-2:] , lst))
print(l)
#Tusha...
#ar,sh,an,ya
#

lst=[{"prn":10,"name":"Siddhant"},{"prn":4,"name":"Verma"},{"prn":7,"name":"Sundram"}]
l = list(map(lambda  i : tuple([i["prn"]+1,i["name"][::-1][0].lower()]) , lst))
print(l)
l = list(map(lambda  i : {"prn":str(i["prn"])[0], "nick_name" : i["name"][:4]} , lst))
print(l)

l = list(map(lambda i : str(i["prn"]) == 10 , lst))
print(l)

print("________________________________________________________")
print("filter Function: ")

lst = [10,20,303,50,67,70]
l=list(filter(lambda a : a%2 == 0, lst))
print(l)

lst = ["Tushar","Siddhesh","Kiran","Aditya"]
l = list(filter(lambda  i : i[-2] , lst))
print(l) #[Siddhesh]

lst=[{"prn":10,"name":"Siddhant"},{"prn":4,"name":"Verma"},{"prn":7,"name":"Sundram"}]
l = list(filter(lambda i : lambda a : str(a["prn"]).isdigit() ,lst ))
print(l)








































