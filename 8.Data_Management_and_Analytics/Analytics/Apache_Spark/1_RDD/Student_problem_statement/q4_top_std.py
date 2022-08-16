#Q4 Top Three students who have the highest average grades in the second year

from doctest import DocTestRunner
import sys
from pyspark import SparkContext, SparkConf
sc=SparkContext()

data = sc.textFile("student.txt")

filterYear = data.map(lambda x : (x.split(',')) ).filter( lambda x: x[1]=='year2')\
                .map( lambda y: [y[0],y[1], (float(y[2])+float(y[3]))/2 ])

sortedData = filterYear.sortBy(lambda a : -a[2]) # '-' sign for highest to lowest 
topThree = sortedData.take(3)
print(topThree)
