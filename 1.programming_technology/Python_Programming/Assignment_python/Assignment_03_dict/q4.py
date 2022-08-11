# 4.Write a code to iterate through the given string and store the alphabet and count(occurance) in dictionary -{A:2,a:1, s:10, d:20 ,f:30}

data = "A computer is a machine that can be programmed to carry out sequences of arithmetic or logical operations automatically. Modern computers can perform generic sets of operations known as programs. These programs enable computers to perform a wide range of tasks. A computer system is a complete computer that includes the hardware operating system main software  and peripheral equipment needed and used for full operation. This term may also refer to a group of computers that are linked and function together."

dic = {}

for i in range(0,len(data)):
	dic[data[i]] = data.count(data[i])
print(dic)


"""
#solution 2
char_dict = {}

for i in range(65,90):#search for uppercase alphabet
	first=chr(i)#chr function take int i/p and provides corresponding string i.e. here it will return alphabet for the corresponding ascii value
	char_dict[first]=para.count(first)

for i in range(97,123):#search for lowercase alphabet
	first=chr(i)
	char_dict[first]=para.count(first)
	
print("Dictonary of letters=",char_dict)"""
