import sys
from pyspark import SparkContext, SparkConf

sc = SparkContext("local", "pair example")

marks_rdd = sc.parallelize([('Rahul',25),('Swati',48),('Shreya',22),('Swati',12),('Abhay',29),("Shreya",18),('Abhay',39),('Rohan',29),('Rahul',22),('Rohan',32)])

# create a dictionary base on the student name and all the markes for that student
dict_rdd = marks_rdd.groupByKey().collect()
for key,value in dict_rdd:
    print(key,list(value))

