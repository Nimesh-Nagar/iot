"""4.Define a class named Rectangle which can be constructed by a length 
and width. The Rectangle class has a method which can compute the area.
-1. Implement + operation (Perform addition of length and width)
-2. Implement documentation attribute(__doc__ attribute)
-3. Implement string typecasting and print "The length is ..value.. and width is ..value.."(__str__)
-4. Implement > operation(__gt__(self,other) and return true or false if area is greater or smaller)
-5. Implement == operation(__eq__(self,other) and return true or false if area is equal or not)"""

class Rectangle:

	def __init__ (self,length,width):
		self.length = length
		self.width = width
	def add(self):
		return self.length+self.width
	def __str__(self):
		return "The length is " +str(self.length)+ " and width is " +str(self.width)	
			
#1. use of + operator		
r=Rectangle(10,30)
print(r.add())

#3. use of __str__ operator
s=Rectangle(10,30)
print(s.__str__())




			
		
