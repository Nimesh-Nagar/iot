"""Projects Assignment:

Implement using dictionary:
        -Add Employee
        -Delete Employee
        -Search Employee by name
        -Change Employee Data
       	=>Change name
                =>change age
                =>Change gender
                =>change salary
        -Manage All Teams
		-Create new Team
		-Display team
		-Manage Team(Particular Team)
		        -Rename Team(optional)
                        -Display Members
                        -Add Members
                        -Delete Members
        -Display

Properties:Empid, Name,age,gender,place,salary,previous_company,joining_date (Date format "21/04/2021" dd/mm/yyyy)                
"""
       
class ERP:
	def __init__(self, empid,name,age,gender,palce,salary,previous_company,joining_date):
		self.empid = empid
		self.name = name
		self.age = age
		self.gender = gender
		self.place = place
		self.salary = salary
		self.previous_company = previous_company
		self.joining_date = joining_date
		
	def display(self):
		print("Employee ID :",self.empid)
		print("Employee Name :",self.name)
		print("Employee Age :",self.age)
		print("Employee gender :",self.gender)
		print("Place of living :",self.place)
		print("Employee salary :",self.salary)
		print("Employee past Company :",self.previous_company)
		print("Employ Joining date :",self.joining_date)

# main menu function 
def menu():
	print("-"*50)
	print("[1] Add Employee")
	print("[2] Delete Employee")
	print("[3] Search employee by name")
	print("[4] change employee data")

	print("[5] Manage all teams")	
		
	print("[6] Display")
	print("[8] Exit")
	print("-"*50)
	
# submenu for Change employee data	
def change_data():
	print("{1} change Name")
	print("{2} change Age")
	print("{3} change gender")
	print("{4} change salary")
	print("{5} back")

ERP = []	

			
# addition of employee details
"""EPR = {
	emp_id01 : ["name","age","gender"], 
	 emp_id02: ["name","age","gender"],
	  emp_id03 : ["name","age","gender"]
	  	    
}"""

def add_emp():
	
	
	ERP["emp_id01"] =  
	ERP["emp_id02"] =
	ERP["emp_id03"] =
	
def display():
	for i,j in ERP.items():
		ERP["i"] = j	
		
			
	
	
		
# main program 	
while True:
	menu()
	ch=int(input("Select any option : "))	
	if ch == 1:
		add_emp()
	elif ch == 2:
		pass
	elif ch == 3:
		pass
	elif ch == 4:
		while True:
			change_data()
			c=int(input("Select to Employee change data :")) 
				
				
	elif ch == 5:
		pass
	elif ch == 6:
		display()
	elif ch == 7:
		break
	else:
		print(" wrong choice ")	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
