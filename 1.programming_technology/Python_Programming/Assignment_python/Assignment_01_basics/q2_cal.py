# Menu driven Calculator

a=int(input("Enter value of a : "))
b=int(input("Enter value of b : "))

while(1):
	print("-"*50)				
	print("[1]. Addition")
	print("[2]. Sutraction")
	print("[3]. Multiplication")
	print("[4]. Division")
	print("[5]. Modulus")
	print("[6]. Exit")
	ch=int(input("Choose any one option from above : "))

	if(ch==1):
		print("Addition : ",a+b)
	if(ch==2):
		print("Subtraction : ",a-b)
	if(ch==3):
		print("Multiplication : ",a*b)
	if(ch==4):
		print("Division : ",a/b)	
	if(ch==5):
		print("Modulus : ",a%b)
	if(ch==6):
		break
			
		

