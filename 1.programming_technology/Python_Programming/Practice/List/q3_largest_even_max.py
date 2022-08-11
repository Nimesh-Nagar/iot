#Q3 Python Program to Print Largest Even and Largest Odd Number in a List

lst = [1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 13]

e_max = lst[0]
o_max = lst[0]

for i in range(1,len(lst)):
    if lst[i]%2 == 0 and lst[i]>e_max:
        e_max = lst[i]
    elif lst[i]%2 != 0 and  lst[i]>o_max:
        o_max = lst[i]        

print("even largest number = ",e_max)

print("Odd largest number = ",o_max)


