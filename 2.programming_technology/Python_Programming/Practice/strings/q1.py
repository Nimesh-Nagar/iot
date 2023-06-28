"""Q1 Python Program to Check if a String is a Pangram or Not"""

# def check(string):
#     alphabet = "abcdefghijklmnopqrstuvwxyz"
#     for ele in alphabet:
#         if ele not in string:
#             return False
#         else:
#             return True
        
# string = "The quick brown fox jumps over a lazy dog"

# if (check(string)== True):
#     print(" Pangram ")
# else:
#     print("Not Pangram")    


# second approch take empty list [] store distinct letters in it from string and count new list must be equal to 26

string = "The quick brown fox jumps over a lazy dog"

check=[]

for ele in string.lower():
    if ele not in check and ele != ' ' and ele.isnumeric == False:
        check.append(ele) 

if len(check) == 26:
    print("Pangram")
else:
    print("NOT Pangram")


