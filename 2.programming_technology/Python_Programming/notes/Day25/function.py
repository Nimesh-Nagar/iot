#default argument
num={}

def process_num(start=1,end=1):
	for i in range(start,end+1):
		num[i] = i * i

def add_three_num(a,b=0,c=0):
	return a + b+ c


def process_data():
	pass
while True :
	pass
if True:
	pass


#start = int(input("Enter some number : "))
#n = int(input("Enter some number : "))
#process_num(start,end)
#process_num(5,end=n) #Keyword based argument
#print(num)
#process_num(end=n,start=5)
#print(num)
#process_num(end=n)
#print(num)

print(add_three_num(10,20,30))
print(add_three_num(10,20))
print(add_three_num(10))
print(add_three_num(c=10,a=10,b=40))





