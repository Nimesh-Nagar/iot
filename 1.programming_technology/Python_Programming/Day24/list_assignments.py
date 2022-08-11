#Addtion of all numbers from string
num="5,2,3,9,5,6,11,8,9"
lst=num.split(",")
res=0
for i in lst:
	res = res + int(i)	

print(res)



#Addtion of all even from string
res=0
for i in lst:
	if(int(i) %2 == 0):
		res = res + int(i)
print(res)
