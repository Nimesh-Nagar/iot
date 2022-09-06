#File handling

#Operation:
#Open ->open()
#Read ->file_Object.read()
#Write ->file_object.write()
#Seek : moving the cursor file_object.seek()

#Mode:
#r,w,a
#r+,w+,a+
#rb,ab,wb
#rb+,wb+,ab+

fd = open("data.txt","r+")
#print(fd.read()) #Reading whole at a time
#fd.write("I am writing from function")
#fd.write(str(["Data",[874]]))
#print(fd.read(10)) #Character count
#print(fd.readline())
#print(fd.readline())

for i in fd:
	print(f"Lines : {i}")
#Seek
#0 ->Start point
#1 ->Current location
#2 ->End location
print(dir(fd))
fd.seek(0,0) #(offset,seek_reference) #POsitive value will move forward and negative will move backward direction
fd.writelines("I am again writing  from function")
print(fd.tell()) #Cursor location 
fd.write("XYZ")
print(fd.tell())
fd.seek(0,2) 
print(fd.seekable())
fd.write("S")



