# 9.Write a program to  remove alternate index word from above string.


string = " A computer is a machine that can be programmed to carry out sequences of arithmetic or logical operations automatically. Modern computers can perform generic sets of operations known as programs. "

lst=string.split()

("".join(list(filter(lambda x : lst.index(i)x%2==0,l))))
