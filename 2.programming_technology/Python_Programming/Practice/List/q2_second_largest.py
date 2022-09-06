#Q2 Python Program to Find Second Largest Number in a List
from cgi import print_form


lst = [1,2,3,4,13,16,14]
max = lst[0]
second_max = lst[0]

for i in range(1,len(lst)):
    if lst[i] > max:
        max = lst[i]

for j in range(1,len(lst)):
    if (lst[i] > second_max and lst[i] != max ):
        second_max = lst[i]

print(second_max)

''' 
lst = [1,2,3,4,13,16,14]

max = lst[0]
for i in range(1,len(lst)):
    if lst[i] > max:
        max = lst[i]

lst.remove(max) 
n_max = lst[0]
for j in range(1,len(lst)):
    if lst[j]>n_max:
        n_max = lst[j]
print(n_max)        

'''
