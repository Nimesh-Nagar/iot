 #map() function
 
"""map() function returns a map object(which is an iterator) of the results after applying the given function to each item of a given iterable (list, tuple etc.)"""

	#Syntax :	map(fun, iter)

"""
#Parameters :

	fun : It is a function to which map passes each element of given iterable.
	iter : It is a iterable which is to be mapped.

#NOTE : You can pass one or more iterable to the map() function.

#Returns :
Returns a list of the results after applying the given function to each item of a given iterable (list, tuple etc.)

NOTE : The returned value from map() (map object) then can be passed to functions like list() (to create a list), set() (to create a set) 
"""
#CODE 1

# Python program to demonstrate working
# of map.
  
# Return double of n
def addition(n):
    return n + n
  
# We double all numbers using map()
numbers = (1, 2, 3, 4)
result = map(addition, numbers)
print(list(result))


#===> [2, 4, 6, 8]

#CODE 2
#We can also use lambda expressions with map to achieve above result.

# Double all numbers using map and lambda
  
numbers = (1, 2, 3, 4)
result = map(lambda x: x + x, numbers)
print(list(result))


#==> [2, 4, 6, 8]


