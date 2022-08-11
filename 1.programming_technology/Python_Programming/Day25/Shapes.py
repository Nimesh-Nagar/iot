import math
class Circle:
	def __init__(self,rad):
		self.rad = rad
	def area(self):
		return math.pi * self.rad * self.rad
	def __str__(self): #Convert to string	
		return "Circle :" + str(self.rad)
	def __add__(self,temp): #+
		return Circle(self.rad + temp.rad)
	def __eq__(self,temp): #==
		return self.rad == temp.rad

class Rectangle:
	def __init__(self,l,b):
		self.l = l
		self.b = b
	def area(self):
		return self.l * self.b
	def __str__(self): #Convert to string	
		return "Rectangle :" + str(self.l) + " "+str(self.b)


c = Circle(10)
r = Rectangle(10,30)
#printing area
print(c.area())
print(r.area())

print(c)
print(r)

x = Circle(20)
#+ operator
y = c + x
print(y)
print( c == x)

#__add__(self,arg) +
#__eq__(self,arg) ==
#__ne__(self,arg) !=
#__gt__(self,arg) >
#__lt__(self,arg) <
#__le__(self,arg) <=
#__ge__(self,arg) >=
#__len__(self) len()
#__mul__(self,arg) *
#__contains__(self,arg) in
#__str__(self) convert to string
#__doc__ = value #for documentation
#__dir__(self) dir()























