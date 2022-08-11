#Q1 Python Program to Find Largest Number in a List

lst = [1,2,3,4,25,6,7]
max = lst[0]
for i in range(1,len(lst)):
    if lst[i]>max:
        max = lst[i]

print("largest Number",max)
