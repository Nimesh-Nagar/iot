""" Try following expression in print statements:(Analyze the output or error)
"a"*10
"abc"*10
"a"+'b'

"abcd "xyz"cc"
"abcd 'xyz'cc"
'abcd "xyz"cc'
'abcd 'xyz'cc'

int(3.14)
str(3.14)
int("sid")

int("100234567892345678000000000000000")
int(333)

"""

print("a"*10)		# printing character "a" 10 times
print("abc"*10)		# printing "abc" 10 times
print("a"+'b')		# concatination a and b character

print("abcd" "xyz" "cc")	# printing characters without space i.e abcdxyzcc
print("abcd 'xyz'cc")		# abcd 'xyz'cc
print('abcd "xyz"cc')
print('abcd "xyz" cc')

print(int(3.14))	# 3
print(str(3.14))	# string 3.14
print(str("sid"))	#instead of int it is  str

print(int("100234567892345678000000000000000"))	 # print as it is not limit in python
print(int(333)) 	








