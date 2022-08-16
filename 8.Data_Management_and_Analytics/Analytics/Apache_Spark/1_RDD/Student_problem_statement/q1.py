# Q1 Claculate the year wise marks (i.e. two Semesters for a year )for each student

import sys
from pyspark import SparkContext,SparkConf
sc= SparkContext("local","student data RDD")

data = sc.textFile("student.txt")

# print(data.collect())
split = data.map(lambda x :(x.split(',')))

std_marks = split.map(lambda x :[x[0],x[1], (float(x[2]) + float(x[3]))/2] )
#convert python list and print
for i in std_marks.collect():
    print(i)

# print(std_marks.collect())





