
def add(a,b):
	return a + b

def sub(a,b):
	return a -b

def mul(a,b):
	return a*b

menu={
	"1" : add,
	"2" : sub,
	"3" : mul 
}

while True:
	print("[1]Add  [2]Sub [3]Mul")
	ch = input("Enter choice :")
	a = int(input("Enter number : "))
	b = int(input("Enter "))	
	print(menu[ch](a,b))
