#Q4 Python Program to Split Even and Odd Elements into Two Lists

lst = [1,2,3,4,5,6,7,8,9,10,11]

even_lst = []
odd_lst = []

for i in range(0,len(lst)):
    if lst[i]%2 == 0:
        even_lst.append(lst[i])
    else:
        odd_lst.append(lst[i])    

print("Even list  : ", even_lst)

print("Odd list : ",odd_lst)