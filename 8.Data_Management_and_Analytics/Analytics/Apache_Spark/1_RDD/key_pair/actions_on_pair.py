import sys
from pyspark import SparkContext,SparkConf

sc=SparkContext("local", "Action on key/pair RDD")

marks_rdd = sc.parallelize([('Rahul',22),('Swati',48),('Shreya',22),('Swati',12),('Abhay',29),("Shreya",18),('Abhay',39),('Rohan',29),('Rahul',22),('Rohan',32)])

# Action on pair 'countByKey'
dict_rdd = marks_rdd.countByKey().items()
for key,value in dict_rdd:
    print(key,value)	#

# Action on pair 'collectAsMap'
print("Collect As Map ==>")
print(marks_rdd.collectAsMap())

# Action on pair 'lookup(key)'
print("Lookup  ==>")
print(marks_rdd.lookup('Shreya'))








