# remove duplicates
string = input("Enter the string")
lst = string.split(" ")
new_lst = []

for i in lst:
	if lst.count(i)==1 :
		new_lst.append(i)
		
l = list(filter(lambda i : lst.count(i)==1, lst))
print("".join(l))
	
	
# reverese all words
string = """A computer is a machine that can be programmed to carry out sequences of arithmetic or logical operations automatically. Modern computers can perform generic sets of operations known as programs. These programs enable computers to perform a wide range of tasks. A computer system is a complete computer that includes the hardware operating system main software  and peripheral equipment needed and used for full operation. This term may also refer to a group of computers that are linked and function together"""

lst = string.split(" ")	
print(" ".join(list(map(lambda i : i[: :-1] , lst))))

#upper case alternate word
