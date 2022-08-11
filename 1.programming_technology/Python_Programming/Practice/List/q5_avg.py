#Q5 Python Program to Find Average of a List

# lst = [1,2,3,4,5,6]

# sum = 0 
# for i in range(0,len(lst)):
#     sum = sum + lst[i]

# print(sum)
# print( "Average is : ",(sum/6) )

n = int(input("Input total number elements "))
a=[]
sum = 0
for i in range(0,n):
    ele=int(input("enter elements :"))
    a.append(ele)
    sum = sum + a[i]
    
print(" list is ",a)   
print(" sum of elements of list is : ",sum)
print(" Average of elments in list is : ",(sum/n))
 
