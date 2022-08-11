std=[] #empty list
"""
{
	name : "Tushar",
	prn : 1
	address : { city : "pune"}

}
"""
def add_student():
	temp = {}
	temp["prn"] = int(input("Enter prn : "))
	temp["name"] = input("Enter name : ")
	temp["address"] = {}
	temp["address"]["city"] = input("Enter City: ")
	std.append(temp)
	
def display_student():
	print(std)

def delete_student():
	prn = int(input("Enter prn to delete : "))
	for i in std:
		if i["prn"] == prn :
			std.remove(i)


def menu():
	print("[1] Add Student")
	print("[2] Delete Student")
	print("[3] Display Student")
	print("[4] Exit")

while True:
	menu()
	ch = int(input("Enter choice :"))
	if ch == 1 :
		add_student()
	elif ch == 2 :
		delete_student()
	elif ch == 3:
		display_student()
	elif ch == 4:
		break
	else :
		print("Wrong choice") 
