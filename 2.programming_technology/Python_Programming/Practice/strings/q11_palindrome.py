# Q12 Python Program to Check if a Given String is Palindrome

str = "abba"
rev = str[: : -1]

print(f"String -- {str}")
if rev == str:
    print("String is Palindrome")
else:
    print("String is not Palindrome")    

