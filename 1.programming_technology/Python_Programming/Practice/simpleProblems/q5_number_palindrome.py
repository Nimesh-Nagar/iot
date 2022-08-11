# 456
def check_palindrome(num):
    # check = str(num)
    # if (check == check[: :-1]):
    #     print("Number is palindrom")
    # else:
    #     print("Number is not palindrom ")  
    rev = 0  
    while(num > 0):
        rem = num % 10
        rev = rev * 10 + rem
        num = num // 10
    if(num == rev):
        print("Number is palindrom")
    else:
        print("Number is not palindrom")     


if __name__ == "__main__":

    num = int(input("Number to check : "))
    check_palindrome(num)


#num = 456 
# while(num!=0)

# temp = num%10
# rem = rem*10+temp  ===654
#
# num=num/10

