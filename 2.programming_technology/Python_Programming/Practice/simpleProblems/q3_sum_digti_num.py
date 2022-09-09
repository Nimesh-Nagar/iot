# Sum of Digit of a Number using Recursion in Python (468 --- 4+6+8=18)

#without resursion
l = []
def sum_digit(number):
    sum=0
    while number != 0:
        temp=number%10    # 468%10 = 8 , 46%10=6, 4%10=4
        sum = sum + temp  # 0+8=8, 8+6=14, 14+4=(18)
        number=number//10 # 468//10 = 46, 46//10=4, 4//10=0 
        print(number)
    print(f"Addition of digits of {number} is ",sum)

num = int(input("Enter the number to add its digit: "))
sum_digit(num)


# With Resursion:
