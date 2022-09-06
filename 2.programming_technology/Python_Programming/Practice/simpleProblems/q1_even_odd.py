# Python Program to Check Whether a Given Number is Even or Odd using Recursion

def check_num(num):
    if num%2 == 0:
        print(f"Entered number {num} is EVEN")
    else:
        print(f"Entered Number {num} is ODD")    


number = int(input("Enter any Number :"))
check_num(number)