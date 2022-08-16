import numbers
import sys
from pyspark import SparkContext, SparkConf

if __name__ == "__main__":
    sc = SparkContext("local","test example")
    numbers=sc.parallelize([1,7,8,9,5,77,48])

    # aggregate RDD elements using addition function 
    sum=numbers.reduce(lambda a,b:a+b)
    print("sum is : %d"%sum)


    #min and max
    min = numbers.reduce(lambda a,b : min(a,b))
    max = numbers.reduce(lambda a,b : max(a,b))
    print("min is {} and max is {}".format(min,max))