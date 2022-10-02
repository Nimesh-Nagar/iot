#try:
	#corret statements
#except:
	#handle error
#finally:
	#handle error

#try:
	#correct statements
#except ErrorName:
#	handle error
#finally:
#	hnadle error	

"""
a = input("Enter something")
try:
	a = int(a)
except:
	print("Always enter integer value")
try:
	fd = open("data.txt","r")
except FileNotFoundError:
	fd = open("data.txt","w")
	fd.close()
except IOError:
	print("Some I/O error")

"""
try:
	fd = open("data.txt","r")
except FileNotFoundError:
	fd = open("data.txt","w")
finally: #Always executes
	fd.close()
	
def user_input():
	return int(input("Enter some number"))

try:
	user_input()
except:
	print("Enter Integer value : ")
	user_input()
finally: #Always executes
	#validation
	if age > 100:
		print("Wrong age")
	

try:
	user_input()
finally:
	if age > 100:
		print("Wrong age")

















