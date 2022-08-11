#Multiple parent is not allowed

class Student:
	def __init__(self,prn = 0,name=""):
		self.prn = prn
		self.name = name
		self.marks = 0

	def display(self):
		print("PRN :",self.prn)
		print("Name :",self.name)
		print("Marks :",self.marks)
		self.x = 0
	def set_marks(self,marks):
		self.marks = marks

class IoTStudent(Student):
	def __init__(self,prn=0,name="",assigned_hardware=0):
		super().__init__(prn,name)
		self.assigned_hardware = assigned_hardware

	def display(self):
		super().display()
		print("Assigned Hardware :",self.assigned_hardware)

class DACStudent(Student):
	def __init__(self,zoom_id=""):
		self.zoom_id = zoom_id


	def display(self):
		super().display()
		print("Zoom Id :",self.zoom_id)

s1 = IoTStudent()
s2 = DACStudent()

s1.prn = 1
s1.name = "Tushar"
s1.assigned_hardware = 10
s1.set_marks(120)

s2.prn = 1
s2.name = "Aman"
s2.marks = 90
s2.zoom_id = "87483274982374982"

s1.display()
print("_______________________________________")
s2.display()

s3 = IoTStudent(3,"SIddhant",10)
print("_________________________________________")
s3.display()


del s1.prn
s1.display()









