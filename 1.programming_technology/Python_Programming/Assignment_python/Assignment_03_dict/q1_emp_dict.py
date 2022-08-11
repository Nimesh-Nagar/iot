"""1.Write a menu driven code to store employee information in dictionary(Only one employee details)
->Add employee details
->delete emplpoyee
->Display employee
Take input from user
Properties: Name,Age,Gender,Place,Salary,Previous_company """


emp = [] # empty list
def menu():
	print("[1]. Add Employee details ")
	print("[2]. Delete Employee ")
	print("[3]. Display ")
	print("[4]. Exit\n")
	
# add employ function
def add_emp():
	temp = {}	
	temp["name"]=input("Enter name of employee : ")
	temp["age"]=input("Age : ")
	temp["gender"]=input("Gender : ")
	temp["Place"]=input("Place : ")
	temp["Salary"]=int(input("Salary : "))
	temp["previous_company"]=input("previous company name : ")
	emp.append(temp)

# display employ details		
def display_emp():
	print(emp)

def delete_emp():
	name=input("Enter name to delete : ")
	for i in emp:
		if i["name"]== name:		
   			emp.remove(i)
		else: 
			print("Name not found")
	

while True:
	menu()
	ch = int(input("Choose any option : "))
	if(ch==1):
		add_emp()
	elif(ch==2):
		delete_emp()		
	elif(ch==3):
		display_emp()	
	elif(ch==4):
		break	
	else:
		print("Worng input")
		
			
