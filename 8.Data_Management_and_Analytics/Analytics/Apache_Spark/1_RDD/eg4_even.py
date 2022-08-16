import sys
from pyspark import SparkContext, SparkConf

sc=SparkContext("local","filter example")

rdd = sc.parallelize([1,2,3,4,5,6,7,8,9,10,11,12])
output= rdd.filter(lambda x: x%2==0).collect()
print(output)
