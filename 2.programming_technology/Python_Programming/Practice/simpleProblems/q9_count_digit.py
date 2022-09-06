#Q8 Python Program to Count the Number of Digits in a Number

def count_dig(num):
    cnt = 0
    while num !=0:
        num = num // 10
        cnt += 1
    print(f"Number of digits : {cnt}")

digit = int(input("enter number : "))

count_dig(digit)