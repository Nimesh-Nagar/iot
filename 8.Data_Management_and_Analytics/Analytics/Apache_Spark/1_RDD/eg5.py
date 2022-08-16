import sys
from pyspark import SparkContext, SparkConf

sc=SparkContext("local","distinct example")

rdd = sc.parallelize([1,2,3,4,5,6,7,8,9,10,11,12,1,2,3,4,5,6,1,2,3,4,5,7,8,2,3,"Hello","hi","Hello","hi","HI","hello"])
output = rdd.distinct().collect()
print(output)
