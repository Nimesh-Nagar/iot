string = input("Enter string")
lst = string.split(" ")
new_lst=[]
for i in lst:
	if lst.count(i) == 1 :
		new_lst.append(i)	

#print(new_lst)
l = list(filter(lambda i : lst.count(i) == 1, lst ))
print(" ".join(l))


string = """A computer is a machine that can be programmed to carry out sequences of
 arithmetic or logical operations automatically. Modern computers can perform
 generic sets of operations known as programs. These programs enable computers
 to perform a wide range of tasks. A computer system is a complete computer
 that includes the hardware operating system main software  and peripheral
 equipment needed and used for full operation. This term may also refer 
to a group of computers that are linked and function together"""

#lst = string.split(" ")
#l=list(map(lambda i : i[::-1], lst))
#print(" ".join(l))
#print(" ".join(list(map(lambda i : i[::-1] , string.split(" ")))))
lst = string.split(" ")
print(" ".join(list(filter(lambda i : lst.index(i)%2 == 0, lst  ))))

def change_upper(i):
	if lst.index(i)%2 == 0:
		return i.upper()
	else:
		return i


print(" ".join(list(map(lambda i : change_upper(i) ,string.split(" ")))))



