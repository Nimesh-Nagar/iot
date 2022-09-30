# Q5 Python Program to Create a Class in which One Method Accepts a String from the User and Another Prints it

class String :

    def __init__(self):
        self.string = ""

    def input(self):
        self.string = input("Enter the String : ")    


    def display(self):
        print("User Input is : ",self.string)

obj = String()
obj.input()
obj.display()         
    

