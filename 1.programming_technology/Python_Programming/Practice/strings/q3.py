#Q5 Python Program to Reverse a String using Recursion

def reverse(temp):
    if len(temp)==0:
        return temp
    else:
        return reverse(temp[1:])+temp[0]

string = "abcde"
print(reverse(string))
