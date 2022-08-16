# Q3 Show sorted (highest to lowest) avg grades in second year

from doctest import DocTestRunner
import sys
from pyspark import SparkContext, SparkConf
sc=SparkContext()

data = sc.textFile("student.txt")

filterYear = data.map(lambda x : (x.split(',')) ).filter( lambda x: x[1]=='year2')\
                .map( lambda y: [y[0],y[1], (float(y[2])+float(y[3]))/2 ])

# for ele in filterYear.collect():
#     print(ele)


sortedData = filterYear.sortBy(lambda a : -a[2]) # '-' sign for highest to lowest 
for ele in sortedData.collect():
    print(ele)
# print(sortedData.collect())
