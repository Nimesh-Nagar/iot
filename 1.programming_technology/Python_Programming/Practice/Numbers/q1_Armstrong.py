#Q1 python program to find armstrong number or not (153 = 1^3 + 5^3 + 3^3 = 153, 370,  1634)

# more than three digit not working 
def amstrong_num(num):

    check = num
    sum = 0
    while check !=0:
        temp = check%10 #3
        sum = sum + (temp*temp*temp)
        check = check //10

    # print(sum)

    if num == sum :
        print(f"Number {num} is Amstrong Number")
    else:
        print(f"Number {num} is not a Amstrong Number")        

num = int(input("Enter number : "))
amstrong_num(num)

