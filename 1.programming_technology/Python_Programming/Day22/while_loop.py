#print the table
i=1
while i <= 10:
	print(i*2 )
	i = i+1 #i+=1

print("By for loop")
for i in range(1,11):
	print(i*2, end= " ") #to print in single line
	


print("\nEven number till 20")
for x in range(1,21):
	if(x%2 == 0):
		print(x,"is even")

