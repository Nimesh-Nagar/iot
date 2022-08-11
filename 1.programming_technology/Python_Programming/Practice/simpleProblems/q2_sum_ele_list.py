# Python Program to Find the Sum of Elements in a List using Recursion
'''
#First Approach : hard code list 
def sum_element(list):
    sum = 0
    for ele in list:
        sum=sum+ele
    #print(f"Addition of elements",sum)    
    return sum

list = [1,2,3,4,5]

result = sum_element(list)
print(f"Addition of elements of list ",result)

'''

#Second Approch : user define list
#function to cal sum
def sum_list(list,size):
    sum=0
    if (size==0):
        return 0
    else:
        for ele in list:
            sum=sum+ele
        return sum     



n = int(input("Enter number of elements for list : "))
list = []

for ele in range(0,n):
    element=int(input("Enter Element : "))
    list.append(element)
print(f"The LIST is ----> ", list)

b=sum_list(list,n)
print(f"Sum of elements in List is {b}")













