class Student:
	def __init__(self,x=0,y="",z=0):
		self.prn = x
		self.name = y
		self.marks = z
		self.attd = 0
	def display(self):
		print("\tStudent prn  : ",self.prn)
		print("\tStudent name : ",self.name)
		print("\tStudent marks: ",self.marks)
		print("\tGrade 	      : ",self.get_grade())
		print("\tAttendance   : ",self.attd)
	def get_grade(self):
		if self.marks > 60 :
			return "A"
		elif self.marks > 50:
			return "B"
		else :
			return "Fail"
	def mark_attd(self):
		self.attd +=1

"""
s1 = Student(1,"Siddhant",10)
s2 = Student(2,"Anubhav",10)
print(s1.name)
print(s1.prn)
s1.display()
s2.display()
"""

std=[]
def add_student():
	a = int(input("Enter prn"))
	b = input("Enter name")
	c = int(input("Enter marks"))
	std.append(Student(a,b,c))

def display_student():
	for i in std:
		i.display()	

def search_student():
	name = input("Enter name to search : ")
	for i in std:
		if name == i.name :
			i.display()

def menu():
	print(" [1]Add Student \n [2] Display Student \n [3] Search Student")


while True :
	menu()
	ch = int(input("Enter choice : "))
	if ch == 1:
		add_student()
	elif ch == 2:
		display_student()
	elif ch == 3:
		search_student()





