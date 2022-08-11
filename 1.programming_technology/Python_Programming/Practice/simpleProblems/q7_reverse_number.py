#Q7 Python Program to Reverse a Number

def reverse(num): 
    rev = 0
    while(num>0):
        temp = num % 10 
        rev = rev*10 + temp
        num = num // 10
    print(rev)



num = int(input("enter number "))
reverse(num)
