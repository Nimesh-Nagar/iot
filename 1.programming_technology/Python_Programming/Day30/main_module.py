#import calc #Import by file name

#print(calc.add(10,20))
#print(calc.sub(10,20))
#print(calc.data)

#import calc as c #Creating alias here

#print(c.add(10,20))#

from calc import add,sub #Here only importing add function
#from modulename import function/variable
print(add(10,20))
