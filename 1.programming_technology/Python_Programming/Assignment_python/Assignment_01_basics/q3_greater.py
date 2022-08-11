# Greatest number out of four

# taking input from user 
w=int(input("Enter 1st number : "))
x=int(input("Enter 2nd number : "))
y=int(input("Enter 3rd number : "))
z=int(input("Enter 4th number : "))

# Comparing each values which was entered by user:-

if((w>x) and (w>y) and (w>z)):
	print("1st number is Greater")
	
elif((x>y) and (x>z) and (x>w)):
	print("2nd number is Greater") 
	
elif((y>z) and (y>x) and (y>w)):
	print("3rd number id Greater")
	
else:
	print("4th number is Greater")
	
		


