a=100
if str(a)== str(a)[::-1]:
	print("Palindrome")
else:
	print("Not palindrome")

name="paaaap"
x=0;
for i in range(0,len(name)):
	if name[i] != name[len(name)-i-1] or i+1 ==  len(name)-i:
		break
	x = i
	print(x," ",len(name)-i-1)

print(len(name))
if x == len(name)//2:
	print("palindrome")
else :
	print("Not Palindrome")
