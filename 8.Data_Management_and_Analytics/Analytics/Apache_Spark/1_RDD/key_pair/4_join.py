import sys
from typing import final
from pyspark import SparkContext, SparkConf

sc = SparkContext("local", "pair example")

marks_rdd = sc.parallelize([('Rahul',25),('Swati',48),('Shreya',22),('Swati',12),('Abhay',29),("Shreya",18),('Abhay',39),('Rohan',29),('Rahul',22),('Rohan',32)])
mobile_rdd = sc.parallelize([ ('Rahul','9106548973'),('Swati','9624589300'),('Shrey','7199156589'),('Abhay','90334628169'),('Rohan','8780872535') ])

final_rdd = marks_rdd.join(mobile_rdd)
for key,value in final_rdd.collect():
    print(key,list(value))

