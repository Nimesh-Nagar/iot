"""1.Start a mini project Console ERP system.
	-Add Employee
	-Delete Employee
	-Search Employee by name
	-Search employee by empid
	-Search employee by salary(Check greater)
	-Change Employee Data(name,id,salary)
	-Display
Empid, Name,age,gender,place,salary,previous_company,joining_date use class - Object """

class ERP:
	def __init__(self,emp_id,emp_name,age,gender,salary):
		self.emp_id = emp_id
		self.emp_name = emp_name
		self.age = age
		self.gender = gender
		self.salary = salary
	
	def display(self):
		print("*"*25)
		print("Employee ID :",self.emp_id)
		print("Employee name :",self.emp_name)
		print("Age :",self.age)
		print("Gender :",self.gender)
		print("Salary :",self.salary)
		print("*"*25)

emp_lst = []

def add_emp():
	emp_id = int(input("Employee ID :"))
	emp_name = input("Employee Name :")
	age = input("Employee age :")
	gender = input("Employee Gender :")
	salary = int(input("Employee salary : "))
	e = ERP(emp_id,emp_name,age,gender,salary)	#Object created	
	emp_lst.append(e)
	
def delete_emp():
	emp_id = int(input("Enter emp id to delete"))
	for i in emp_lst:
		if emp_id == i.emp_id:
			emp_lst.remove(i)


def search_emp_name():
	name=input("Enter Name you are looking for :")
	for i in emp_lst:
		if name == i.emp_name:
			i.display()
def search_emp_id():
	empid=int(input("Enter ID you are looking for :"))
	for i in emp_lst:
		if empid == i.emp_id:
			i.display()
"""def search_emp_salary():
	saly=int(input("Enter Employee salary :"))
	for i in emp_lst:
		if saly <= i.salary:
			print(i.salary)
"""
		
def menu():
	print("_"*50)
	print("[1] Add Employee")
	print("[2] Delete Employee")
	print("[3] Search employee by name")
	print("[4] Search employee by Id")
	print("[5] Search employee by Salary")	#(Check greater)
	print("[6] change employee data")	#(name,id,salary)
	print("[7] Display")
	print("[8] Exit")
	print("_"*50)

def display():
	for i in emp_lst:
		i.display()
		
		
	
while True:
	menu()
	ch = int(input("Enter choice : "))
	if ch == 1 :
		add_emp()
	elif ch == 2:
		delete_emp()
	elif ch == 3 :
		search_emp_name()
	elif ch == 4 :
		search_emp_id()
	elif ch == 5:
		search_emp_salary()

	elif ch == 7:
		display()
	elif ch == 8:
		break
	else :
		print("Wrong choice")
	
