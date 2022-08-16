import sys
from pyspark import SparkContext, SparkConf

sc = SparkContext("local", "pair example")

marks_rdd = sc.parallelize([('Rahul',25),('Swati',48),('Shreya',22),('Swati',12),('Abhay',29),("Shreya",18),('Abhay',39),('Rohan',29),('Rahul',22)])

#Display markes sorted by student name - ascending
print(marks_rdd.sortByKey('ascending').collect())

#Display markes sorted by student name - descending
print(marks_rdd.sortByKey(False).collect())