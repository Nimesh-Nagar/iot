data="This is siddhant"
lst = data.split(" ") #returns list seperated by seperater
print(lst)
for i in range(0,len(lst)):
	lst[i]=lst[i].title()
print(lst)
data="|".join(lst)
print(data)
print("___________________________________")

data="1a2a3a4a5a6a"
lst=data.split("a")
print(lst)
for i in range(0,len(lst)):
	if lst[i].isdigit():
		lst[i] = int(lst[i]) * int(lst[i])
		lst[i] = str(lst[i])

print(lst)
data= "a".join(lst)
print(data)
