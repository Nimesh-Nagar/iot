# 1.Perform addition of all numbers in the string (Use Lambda functions)

num="5,2,3,9,5,6,11,8,9"
lst = num.split(",")	# converting string into list

sum=0
add = lambda x : int(x)+sum

for i in lst:
	sum=add(i) 
print(sum)


	
	
	
	
