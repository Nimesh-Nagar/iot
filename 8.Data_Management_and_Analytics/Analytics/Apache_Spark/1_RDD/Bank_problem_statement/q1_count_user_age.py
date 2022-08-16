
from pyspark import SparkContext

sc = SparkContext() # initilize 
output = sc.textFile("bank.csv")\
        .map(lambda x:(x.split(',')[0],1 ))\
        .reduceByKey(lambda x,y:x+y )
 
print(output.collect())

print("*"*100)

#using countByKey()

otherMethod=sc.textFile("bank.csv")\
        .map(lambda x:(x.split(',')[0],1 )) \
        .countByKey()

dict_items=otherMethod.items()        
# print(otherMethod.items())

#Now  printing each items in dictionary
for key,value in dict_items:
        print("Age: %s, Number of customers : %s "%(key,value))


