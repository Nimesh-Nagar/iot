'''Q4 Python Program to Determine How Many Times a Given Letter Occurs in a String Recursively'''

### without recursion

# string = "aabbcde fg hhhi"
# ch = input("count which char ? ")

# count = 0
# for i in string:
#     if(ch == i):
#         count += 1

# print("total: ",count)


# With Recursion

def count( str,ch ):
    if ch not in str:
        return 0
     
    elif str[0] == ch:
        return 1 + count(str[1:],ch)
    
    else:
        return count(str[1:],ch)

string = "abbcde fga hahhi"
ch = input("count which char: ")

cnt = count(string,ch)
print(cnt)


