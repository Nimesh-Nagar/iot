# 9.Write a program to  remove alternate index word from above string.

string = " A computer is a machine that can be programmed to carry out sequences of arithmetic or logical operations automatically. Modern computers can perform generic sets of operations known as programs. "

lst = string.split()

#print(" ".join(list(filter(lambda i: lst.index(i)%2==0,lst))))


def change_upper(i):
	if lst.index(i)%2 == 0:
		return i.upper()
	else:
		return i


print(" ".join(list(map(lambda i : change_upper(i) ,lst))))
