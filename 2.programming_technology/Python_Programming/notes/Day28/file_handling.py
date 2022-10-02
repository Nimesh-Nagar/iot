#File handling
#fd = open("data.txt","r+")
#print(fd.read())
#fd.seek(0,2) #Offset should be 0 at end and current location beacause python cant identify the how many chars in regular file
#fd.seek(0,0)
#fd.close()


with open("data.txt","r+") as fd:
	#fd can be accessed only inside this block
	print(fd.read().decode()) #Use decode function to convert bytes data to string
	fd.write("Some data".encode()) #Use .encode function to convert to bytes format
	#When control goes out of this block file automatically close
#print(fd.write("Data"))
#r,w,a,r+,w+,a+,rb,wb,ab,rb+,wb+,ab+,
fd = open("data.txt","r+")
data = fd.read()
fd.write("Some data to write")
fd.seek(0,0) #0,1,2
fd.close()

with open("data.txt","r+") as f:
	data = f.read()
	f.write("Write some data in file")

with open("data.txt","rb+") as f:
	data = f.read().decode()
	f.write("Write some data in file".encode())


