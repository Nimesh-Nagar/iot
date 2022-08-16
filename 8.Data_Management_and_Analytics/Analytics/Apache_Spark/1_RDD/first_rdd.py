import sys

from pyspark import SparkContext, SparkConf
sc= SparkContext("local", "PySpark RDD example") #SparkContext or SparkSession (modern)

# split on multiple nodes 
myRDD = sc.parallelize([('Big Data',80),('Python',85),('ML',56),('Java',67),('Web Analytics',78),('Good Programming Practices',67),('Software Design',77)])
myRDD.take(7)
myRDD.saveAsTextFile("myRDD/")

#	$spark-sumit <file_name.py>
#	$<file_name.py>
