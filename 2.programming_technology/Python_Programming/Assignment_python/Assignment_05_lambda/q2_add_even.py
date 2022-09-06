# 2.Perform addition of all even number from string

num="5,2,3,9,5,6,11,8,9"
lst=num.split(",")		# converting string to list
print(lst)


even=list(filter(lambda a : int(a)%2 == 0,lst))	#filters the even numbers using lambda function 
print(even)
sum=0

add = lambda a : int(a) + sum	#addition of even numbers
for i in even:
	sum=add(i)
print(sum)
	
