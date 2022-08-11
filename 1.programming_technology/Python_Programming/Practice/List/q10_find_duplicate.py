#Q10 Python Program to Remove Duplicates from a List

n = int(input("Size of list : "))
lst=[]
unique = []

for i in range(0,n+1):
    ele = input("Enter elements for list : ")
    lst.append(ele)

print("Original list is : ",lst)

for ele in lst:
    if ele not in lst:
        unique.append(ele)

        
