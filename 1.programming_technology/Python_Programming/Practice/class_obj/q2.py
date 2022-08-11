# Q2 Python Program to Append, Delete and Display Elements of a List using Classes

class Operation:

    def __init__(self):
        self.list = []

    def add_ele(self):
        ele = int(input("Enter any number to add : "))
        self.list.append(ele)
    
    def delete_ele(self):
        self.display()
        num = int(input("Enter number to remove : "))
        self.list.remove(num)    

    def display(self):
            print("LIST -----> ",self.list)         

def menu():
    print("[1]. Append") 
    print("[2]. Delete") 
    print("[3]. Display")
    print("[4]. Exit")   

       

obj = Operation()

while True:
    menu()
    ch = int(input("Enter your Option :"))

    if ch == 1:
        obj.add_ele()
    elif ch == 2:
        obj.delete_ele()
    elif ch == 3:
        obj.display()  
    elif ch == 4:
        break       
    else:
        print("Choose approprate options ")