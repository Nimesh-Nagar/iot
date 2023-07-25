class Fruit:
    def __init__(self,fruit_id,fruit_name,rate,buy_price):
        self.fruit_id = fruit_id
        self.fruit_name = fruit_name
        self.rate = rate
        self.buy_price = buy_price

    def display(self):
        print("Fruit ID: ",self.fruit_id)
        print("Fruit_name : ",self.fruit_name)
        print("Rate : ",self.rate)
        print("Buying Price : ",self.buy_price)

# 
fruit_lst = []
cart = []        

#
def menu():
    print("-"*50)
    print("[1] Add Fruit")
    print("[2] Delete fruit")
    print("[3] Display fruit")
    print("[4] Buy fruit")
    print("[5] Display cart")
    print("[6] Exit")
    print("-"*50)

def add_fruit():
    f_id = int(input("Enter Fruit ID : "))
    f_name = input("Enter Fruit Name : ")
    f_rate = int(input("Enter Fruit rate : "))
    f_price = int(input("Enter fruit's Buying Price : "))   
    fruit_obj = Fruit(f_id,f_name,f_rate,f_price) 
    fruit_lst.append(fruit_obj)

def display_fruits():
    for i in fruit_lst:
        i.display()
        print()
        # print(fruit_lst)

def delete_fruit():
    id = int(input("Fruit id to delete : "))
    for i in fruit_lst:
        if id == i.fruit_id:
            fruit_lst.remove(i)

def buy_fruit():
    display_fruits()
    id = int(input("::: Enter fruit id to Add fruit into Cart ::: "))
    for i in fruit_lst:
        if id == i.fruit_id:
            cart.append(i)

def display_cart():
    for i in cart:
        i.display()
    print()    


while True:
    menu()
    ch = int(input("Enter choice : "))
    print("-"*50)
    if ch == 1 :
        add_fruit()
    elif ch == 2:
        delete_fruit()
    elif ch == 3 :
        display_fruits()
    elif ch == 4 :
        buy_fruit()
    elif ch == 5:
        display_cart()
    elif ch == 6:
        break
    else :
        print("Wrong choice")






# while True:
#     menu()
#     ch = input("Enter your choice : ")
#     match ch:
#         case 1: 
#             add_fruit()
#         case "2":
#             delete_fruits()  
#         case "3":
#             display_fruits()
#         case "4":
#             buy_fruit()
#         case "5":
#             dispaly_cart()        
#         case "6":
#             break
#         case _:
#             print("Enter appropriate choice")
