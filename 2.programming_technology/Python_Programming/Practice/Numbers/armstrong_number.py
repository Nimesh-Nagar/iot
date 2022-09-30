#Q1 python program to find armstrong number or not (153 = 1^3 + 5^3 + 3^3 = 153, 370,  1634)

# Function to calculate order of the number
def order(n):
    x = 0
    while n!=0:
        x = x + 1
        n = n // 10
    return x

# Function to check whether the given number is Armstrong number or not
def isAmstrong(num):
    x = order(num)
   # print(x)
    temp = num
    sum1 = 0  

    while temp != 0:
        r = temp % 10
        sum1 = sum1 + r**x
        temp = temp // 10

    if sum1 == num :
        print("Give Number is Armstrong ")
    else: 
        print("NOT an Armstrong Number ")        


num = int(input("Enter number to check it is Armstrong or Not : "))
isAmstrong(num)