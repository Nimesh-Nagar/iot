print("[1]Add")
print("[2]Substraction")

ch = int(input("Enter choice :"))
a = int(input("Enter value of a :"))
b = int(input("Enter value of b :"))

if ch == 1:
	print(a + b)
elif ch == 2:
	print(a - b)
elif ch == 3:
	print( a * b)
else:
	print("Wrong input")

#No switch cases in python


