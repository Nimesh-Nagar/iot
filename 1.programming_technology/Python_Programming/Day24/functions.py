def add(x,y):
	print( "Addition is = " , x + y)	

def sub(x,y):
	return x - y

def sqr_add(x):
	s = x * x
	a = s + x
	return s,a

a = int(input("Enter number"))
b = int(input("Enter number"))
add(a,b)
c=sub(a,b)
print(c)

c,d = sqr_add(10)
print(c," ",d)

