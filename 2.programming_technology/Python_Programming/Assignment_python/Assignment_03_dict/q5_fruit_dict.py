"""5.Fruit shop project:
Implement using dictionary
	-Add fruit
	-Delete fruit by name
	-Search fruit by name and rate
	-Change fruit name and rate
	-Display
Properties: fruit_id,fruit_name,rate,imported_from,import_date,buy_price"""
fruit = []
def add_fruit():
	temp = {}	
	#temp["id"]=int(input("Enter fruit_id : "))
	temp["name"]=input("Enter fruit_name : ")
	temp["rate"]=int(input("Enter Rate : "))
	#temp["from"]=input("Imported from : ")
	#temp["date"]=input("Imported date : ")
	#temp["price"]=input("price : ")
	fruit.append(temp)
	
def display_fruit():
	print(fruit)
	
#function delete fruit by name	
def delete_fruit():
	search_name=input("Enter fruit name to delete : ")
	for i in fruit:
		if i["name"] == search_name:		
   			fruit.remove(i)

#Search fruit function 
def search_fruit_name_id():
	search_name=input("Enter name to search:- ")
	fruit_rate=int(input("Enter fruit rate:- "))
	for i in range(0,len(fruit)):
		if fruit[i]["name"]==search_name and fruit[i]["rate"]==fruit_rate:
			print("Fruit Found :",fruit[i])
						
# function for name change		
def change_name():
	s_name=input("Enter name to search:- ")
	new_name=input("Enter New name :- ")
	new_rate=int(input("Enter new rate:- "))
	
	for i in range fruit:
		if i["name"] == s_name:
			i["name"]==new_name
			i["rate"]==new_rate	

		
def menu():
	print("[1]. Add Fruit ")
	print("[2]. Delete Fruit ")
	print("[3]. Search Fruit ")
	print("[4]. change Fruit name ")
	print("[5]. Display ")
	print("[6]. Exit\n")	
	print("#"*50)
	
while True:
	menu()
	ch = int(input("Choose any option : "))
	if(ch==1):
		add_fruit()
	elif(ch==2):
		delete_fruit()		
	elif(ch==3):
		search_fruit_name_id()
	elif(ch==4):
		change_name()
	elif(ch==5):
		display_fruit()	
	elif(ch==6):
		break	
	else:
		print("Wrong input")
		
