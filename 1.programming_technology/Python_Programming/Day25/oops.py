#fruit_id,fruit_name,rate,imported_from,import_date,buy_price
"""
class Fruit:
	fruit_id = 0 #Dont use self here
	fruit_name = ""
	rate = ""
	buy_price = 0
	
f = Fruit() #creating object
print(f)
"""
"""
class Fruit:
	def __init__(self): #Constructor #Used for initialization
		self.fruit_id = 0 
		self.fruit_name = ""
		self.rate = ""
		self.buy_price = 0
	
f = Fruit()
print(f)
f.fruit_id = 1
f.fruit_name = "Apple"
f.rate = 10
f.buy_price = 5
print(f.fruit_id)
print(f.fruit_name)
print(f.rate)
print(f.buy_price)
print("_"*20)

f1 = Fruit()
f1.fruit_id = 2
f1.fruit_name = "Banana"
f1.rate = 10
f1.buy_price = 5
print(f1.fruit_id)
print(f1.fruit_name)
print(f1.rate)
print(f1.buy_price)
"""
class Fruit:
	def __init__(self,a=0,b="",c=0,d=0): #Constructor #Used for initialization
		self.fruit_id = a 
		self.fruit_name = b
		self.rate = c
		self.buy_price = d

f1 = Fruit(0,"Apple",10,5)
f1.fruit_name = input("Enter fruit name")

f2 = Fruit()
f3 = Fruit(0)























