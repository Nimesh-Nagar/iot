# Q4 Python Program to Find the Area and Perimeter of the Circle using Class
import math

class Circle:
    
    # Constructor of circle class
    def __init__(self,radius):
        self.radius=radius

    #method to calculate area of circle 
    def area_circ(self):
        return math.pi*self.radius**2    

    # method to calculate perimeter of circle
    def peri_circ(self):
        return 2 * math.pi * self.radius


radius = int(input("Enter the radius of Circle : "))

# Creating object of Class Circle 
circ_obj = Circle(radius)

# using this object calling the methods of class
print("Area of Circle: ",circ_obj.area_circ())
print("Perimeter of Circle : ",circ_obj.peri_circ())


