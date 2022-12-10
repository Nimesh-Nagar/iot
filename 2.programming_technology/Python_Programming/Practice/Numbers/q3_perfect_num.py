#Q3 Python Program to Check Whether a Given Number is Perfect Number

if __name__ == "__main__":
    num = int(input("Enter number to check perfect or not "))
    sum  = 0 
    
    for i in range(1,num):
        if (num % i == 0):
            sum = sum + i

    if (sum == num):
        print(f"{num} is perfect number ")
    else:
        print(f"{num} is not a Perfect number ")            