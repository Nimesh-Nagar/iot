#Q4 Python Program to Determine How Many Times a Given Letter Occurs in a String Recursively



### without recursion

# string = "aabbcde fg hhhi"
# ch = input("count which char: ")

# count = 0
# for i in string:
   
#     if(ch == i):
#         count += 1

# print("total: ",count)

#With Recursion

def count(str):
    ch = input("count which char: ")
    if count(str) == ch:
        count += 1
        return count
    else:
        return 0 


string = "aabbcde fg hhhi"
#ch = input("count which char: ")

cnt = count(string)
print(cnt)