#Q13 Python Program to find the factorial of number

# num = int(input("enter number : "))
# fact = 1
# for i in range(1,num+1):
#     fact=fact*i
# print(fact)

def fact(n):
    if n == 1:
        return n
    else:
        return n * fact(n - 1)    


num = int(input("enter number : "))

# a=fact(num)

if num < 0:
    print("factorial does not exit ")

elif num == 0:
    print("factorial of 0 is 1")  

else:
    print(f"factorial of {num} is :",fact(num))