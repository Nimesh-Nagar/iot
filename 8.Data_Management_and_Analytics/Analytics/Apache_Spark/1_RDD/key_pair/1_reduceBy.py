import sys
from pyspark import SparkContext,SparkConf

sc=SparkContext("local", "Pair RDD example")

marks=sc.parallelize ([('Rahul',25),('Swati',48),('Swati',38),('Shreya',22),('Swati',12),("Shreya",18)])

#output= sc.parallelize(marks.collect())
print(marks.reduceByKey(lambda x,y:x+y).collect())



