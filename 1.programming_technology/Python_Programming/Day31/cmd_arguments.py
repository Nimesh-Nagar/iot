import sys

def add(a,b):
	return a + b

def sub(a,b):
	return a -b
print(sys.argv) #List

#print(add(int(sys.argv[1]),int(sys.argv[2])))
ch = sys.argv[1]
if(ch == "--add"):
	print(add(int(sys.argv[2]),int(sys.argv[3])))
elif(ch == "--sub"):
	print(sub(int(sys.argv[2]),int(sys.argv[3])))




