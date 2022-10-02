#greater number program

a = int(input("Enter number :"))
b = int(input("Enter number :"))
c = int(input("Enter number :"))
if ( a > b):
	if ( a > c ):
		print("a is greater")
	else:
		print("c is greater")
else:
	if (b > c):
		print("b is greater")
	else:
		print("c is greater")

#________________________________________
if( a > b and a > c):
	print("a is greater")
else:
	print("a is not greater")

if(a > b or a > c):
	print("a is greater than b or c")

#_________________________________________




