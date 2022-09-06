""" 
Q5.Fruit shop project:
Implement using dictionary
	-Add fruit
	-Delete fruit by name
	-Search fruit by name and rate
	-Change fruit name and rate
	-Display
Properties: fruit_id,fruit_name,rate,imported_from,import_date,buy_price """
fruit_lst = []

#Display fruit details  function definition
def display():
	print('_'*40)
	print("Fruit Details=",fruit_lst)
	
#Change fruit function definition
def change_fruit():
	print('_'*40)
	name=input("Enter Fruit name to make changes=")
	new_name = input("Enter New Fruit Name=")
	new_rate = int(input("Enter New Fruit Rate"))
		
	for i in fruit_lst:
	
		if i["fruit_name"] == name:
			i["fruit_name"]=new_name
			i["rate"]=new_rate
		
#Search fruit function definition			
def search_fruit():
	print('_'*40)
	name = input("Enter Fruit Name to Search=") 
	rate = int(input("Enter Fruit rate to Search=")) 
	for i in range(0, len(fruit_lst)):
			if fruit_lst[i]["fruit_name"] == name and fruit_lst[i]["rate"] == rate:
				print("Fruit Found",fruit_lst[i]["fruit_name"])
			
#delete fruit by name function definition				
def delete_fruit():
	print('_'*40)
	for i in fruit_lst:
		fruit_name = input("Enter fruit Name to delete=") 
		if i["fruit_name"] == fruit_name:
			fruit_lst.remove(i)
#Add fruite details function call
def add_fruit():
	print('_'*40)
	fruit_dict = {}
	fruit_dict["fruit_id"] =int(input("Enter Fruit Id=")) 
	fruit_dict["fruit_name"] =input("Enter Fruit Name=")
	fruit_dict["rate"] = int(input("Enter Fruit rate="))
	fruit_dict["import_from"] =(input("Enter Fruit Imported from="))  
	fruit_dict["import_date"] =input("Enter Fruit Import Date=")
	fruit_dict["buy_price"] = int(input("Enter Fruit Price=")) 

	fruit_lst.append(fruit_dict)#dictonary is appended to the list

#Menu selection for operation function definition
def menu():
	print('_'*40)
	print("Enter 1  To Add Fruit")
	print("Enter 2  To Delete Fruit")
	print("Enter 3  To Search Fruit Details by name and rate")
	print("Enter 4  To Change Fruit Details by name and rate")
	print("Enter 5  To Display Fruit Details")
	print("Enter 6  To Exit")

while True:
	menu()
	choice = int(input("Enter Choice Code="))
	
	if choice == 1:
		add_fruit()
	
	elif choice == 2:
		delete_fruit()
	
	elif choice == 3:
		search_fruit()
		
	elif choice == 4:
		change_fruit()
		
	elif choice == 5:
		display()
		
	elif choice == 6:	
		break
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
