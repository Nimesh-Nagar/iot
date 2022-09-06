class Fruit:
	def __init__(self,fruit_id = 0,fruit_name = "",rate = 0,buy_price = 0):
		self.fruit_id = fruit_id
		self.fruit_name = fruit_name
		self.rate = rate
		self.buy_price = buy_price

	def display(self):
		print("Fruit_name : ",self.fruit_name)
		print("Fruit_id : ",self.fruit_id)
		print("Rate : ",self.rate)	


fruit_lst=[]
cart = []

def menu():
	print("_"*50)
	print("[1] Add Fruit")
	print("[2] Delete fruit")
	print("[3] Display fruit")
	print("[4] Buy fruit")
	print("[5] Display cart")
	print("[6] Exit")

def add_fruit():
	fruit_id = int(input("Enter fruit id : "))
	fruit_name = input("Enter fruit name : ")
	rate = int(input("Enter fruit rate : "))
	buy_price = int(input("Enter buy price : "))
	f = Fruit(fruit_id,fruit_name,rate,buy_price)
	fruit_lst.append(f)
	
def display_fruits():
	for i in fruit_lst:
		i.display()
#	print(fruit_lst)
		
def delete_fruit():
	fruit_id = int(input("Enter  fruit id to delete :"))
	for i in fruit_lst:
		if fruit_id == i.fruit_id:
			fruit_lst.remove(i)

def buy_fruit():
	display_fruits()
	fruit_id = int(input(":::Add fruit to cart by fruit id : "))
	for i in fruit_lst:
		if fruit_id == i.fruit_id:
			cart.append(i)

def display_cart():
	for i in cart:
		i.display()

while True:
	menu()
	ch = int(input("Enter choice : "))
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














