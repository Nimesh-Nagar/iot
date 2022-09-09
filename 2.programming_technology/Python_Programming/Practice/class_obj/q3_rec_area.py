# Q3 Python Program to Find the Area of a Rectangle using Classes


class Rectangle:

    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth
    
    def area_rec(self):
        area = self.length*self.breadth
        print(f"Area of Rectangle = {area} ")    


len = int(input("Enter Length of Rectangle : "))
brea = int(input("Enter Breadth of Rectangle : "))

rec = Rectangle(len,brea)
rec.area_rec()