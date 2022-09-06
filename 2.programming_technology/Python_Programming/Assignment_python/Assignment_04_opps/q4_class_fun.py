import math

class Rectangle:
	#def __doc__():
		#return print("This is ractangle function")
	def __init__(self,l,b):
		self.l=l
		self.b=b
	def area(self,l=0,b=0):
		return self.l*self.b
	def __add__(self,c):
		return self.l+self.b
	def __str__(self):
		return "The length is "+str(self.l)+" and width is "+str(self.b)
	def __gt__(self,temp):
		return self.l>temp.l
	def __eq__(self,temp): 
		return self.l==temp.l
	 
c=Rectangle(20,30)
r=Rectangle(10,20)
print("Area of rectangle is : ",c.area())
 
print("Addition of length and width is : ",c+r)
print(c)
print("gt",c>r)
print("ey",c==r)
print(str.__doc__)



