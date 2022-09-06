'''6. Write  menu driven Student names storage system:
->Add student name
->Delete student name
->Check Student is present or not in list
->display'''

std = []

while(1):
	print("(1) Add student name ")
	print("(2) Delete student name ")
	print("(3) Check student ")
	print("(4) Display ")
	print("(5) Exit ")
	ch=int(input("choose any option : "))


	if(ch==1):
		add = input("Name :")
		std.append(add)
		#print(std)
		
	if(ch==2):
		name_rm=input("Enter name to remove : ")
		std.remove(name_rm)
		print("Name deleted from list ")
		
	if(ch==3):
		x=input("Search name : ")
		if x in std :
			print("Name is in list\n")
		else:
			print("Name not prestent\n")
		
	if(ch==4):
		print("Student Names :",std)
				
	if(ch==5):
		break
	
	
	

