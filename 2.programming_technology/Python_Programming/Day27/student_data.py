#1:Siddhant:100
#2:Name:32

fd = open("student_data.txt","r+")
def user_input():
	fd.seek(0,2)
	prn = int(input("Enter prn: "))
	name = input("Enter name : ")
	marks = input("Enter marks:  ")
	fd.write(f"{prn}:{name}:{marks}\n")

def read_data():
	fd.seek(0,0)
	for line in fd:
		lst = line.split(":")
		print(f"Name : {lst[1]} \t Prn : {lst[0]} \t Marks : {lst[2]}")


read_data()
user_input()
user_input()

