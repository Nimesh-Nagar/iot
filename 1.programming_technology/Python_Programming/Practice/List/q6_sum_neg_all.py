#Q6 Python Program to Print Sum of Negative Numbers, Positive Even & Odd Numbers in a List

num = [-2, -4, -3, -2, 1, 2, 3, 4, 5, 6]
# size = int(input("enter number : "))

sum = 0
even = 0
odd = 0

for i in range(0,len(num)):
    if num[i] < 0:
        sum = sum + num[i]

    elif num[i]%2 == 0:  
       even = even + num[i]  

    elif num[i]%2 != 0:
        odd = odd + num[i]   

print("Addition of NEGATIVE number : ",sum) 
print("Addition of EVEN Number : ",even)
print("Addition of ODD Number : ",odd)


