import numbers
import sys

print("Hello how are you ?????")

from pyspark import SparkContext, SparkConf

if __name__ == '__main__':
    conf= SparkConf().setAppName("Read Text to RDD Python  ")
    sc=SparkContext(conf=conf)

    numbers = sc.parallelize([1,2,3,4,5,6,7,8,9,10])

    filteredData= numbers.filter(lambda x : x!=5).collect()

    for num in filteredData:
        print("%i"%(num))