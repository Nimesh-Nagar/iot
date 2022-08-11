#q2 Integer is Palindrome or not

num=int(input("Enter integer to check Palindrome : "))	#22022022
temp = num
rev=0
while(temp > 0):
	rem = temp % 10
	rev = rev * 10 + rem
	temp = temp//10	# '//' used to convert float value to integer 
	
if(rev == num):
	print("Palindrome")
else:
	print("Not a Palindrome")
	


