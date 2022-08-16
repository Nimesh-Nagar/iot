import sys
from pyspark import SparkContext, SparkConf

sc=SparkContext("local","filter example")

rdd=sc.parallelize([1,2,3,4,5,6,4,2,8,9,12])
other = sc.parallelize([3,14,19,4,5])

output = rdd.union(other).collect()
print(output)

output2 = rdd.intersection(other).collect()
print(output2)

output3 = other.union(rdd).collect()
print(output3)





