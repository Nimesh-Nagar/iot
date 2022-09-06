#3.Write a code to check the given string is palindrome or not. (abba)

s = "abba"
print("Given String : ",s)

palin = (lambda a : s == s[ : :-1])
 
print("Given strind is Plandrome ?",paln(s))
