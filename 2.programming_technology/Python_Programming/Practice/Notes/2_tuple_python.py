################################################	Defining a Tuple	################################################ (page 66)

""" A tuple looks just like a list except you use parentheses instead of square brackets. Once you define a tuple, 
you can access individual elements by using each item’s index, just as you would for a list.
For example, if we have a rectangle that should always be a certain size, we can ensure that its size doesn’t change 
by putting the dimensions into a tuple: """

dimensions = (200, 50)
print(dimensions[0])	#----> 200
print(dimensions[1])	#----> 50

# try to assign value to tuple
dimensions[0] = 250
#The code at u tries to change the value of the first dimension, but Python returns a type error. 
#Basically, because we’re trying to alter a tuple, which can’t be done to that type of object,
#Python tells us we can’t assign a new value to an item in a tuple

"""Note ---- Tuples are technically defined by the presence of a comma; the parentheses make them look neater and more readable. 
If you want to define a tuple with one element, you need to include a trailing comma:
	my_t = (3,)
It doesn’t often make sense to build a tuple with one element, but this can happen when tuples are generated automatically."""

# loop over all the values in a tuple (same as list)
dimensions = (200, 50)
for dimension in dimensions:
	print(dimension)	#==> 200, 50
	
dimensions = (400, 100)
print("\nModified dimensions:")
for dimension in dimensions:
	print(dimension)	#==> 400, 100
	
""" When compared with lists, tuples are simple data structures. Use them when you want to store a set of values that should not be changed through- out the life of a program."""	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
