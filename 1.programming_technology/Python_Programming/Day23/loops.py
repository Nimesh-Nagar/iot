#Loops

i=0
add=0
limit=int(input("Enter upper limit number "))
while i < limit:
	if i%2 != 0:
		add = add + i
	i = i + 1
print("Addition of odd numbers upto {limit}",add)

print("************************************")

add=0
for i in range(1,101,2):
		print(i)
		add = add + i
print(add,end=" ")

