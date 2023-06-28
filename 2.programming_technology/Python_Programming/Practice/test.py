# 9.Write a program to  remove alternate index word from above string.

string = " A computer is a machine that can be programmed to carry out sequences of arithmetic or logical operations automatically. Modern computers can perform generic sets of operations known as programs. "
print("Original String : ")
print(string)
lst=string.split()

# print(lst)
print( " ".join(list(filter(lambda x : lst.index(x)%2==0,lst))) )

