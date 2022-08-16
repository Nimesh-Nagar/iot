# Q2 Display only averages for second Year

import sys
from pyspark import SparkContext, SparkConf
sc=SparkContext()

data = sc.textFile("student.txt")

filterYear = data.map(lambda x : (x.split(',')) ).filter( lambda x: x[1]=='year2')\
                .map( lambda y: [y[0],y[1], (float(y[2])+float(y[3]))/2 ])

print(filterYear.collect())

