#Q1 Python Program to Create a Class which Performs Basic Calculator Operations

class Calculator:

    def __init__ (self,num1,num2):
        self.num1 = num1
        self.num2 = num2

    def sum(self):
        res= self.num1 + self.num2
        print("Addition is : ",res)

    def sub(self):
        res = self.num1 - self.num2   
        print("Subtraction is  : ",res)

    def mul(self):
        res = self.num1 * self.num2
        print("Multiplication is  :",res)

    def div(self):    
        res = self.num1 / self.num2
        print("Division is :",res)

def menu():
    print("[1]. Addition ")
    print("[2]. Subtraction ")
    print("[3]. Multiplication ")
    print("[4]. Division ")

   
number1 = int(input("Enter Number 1 : "))
number2 = int(input("Enter Number 2 : "))

cal = Calculator(number1,number2)

while True:
    menu()
    ch = int(input("Choose operation to perform : "))
    if ch == 1:
        cal.sum()    
    elif ch == 2:
        cal.sub()
    elif ch == 3:
        cal.mul()
    elif ch == 4:
        cal.div()
    else:
        print("Choose appropriate option")    


    