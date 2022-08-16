import sys
from pyspark import SparkContext,SparkConf

sc=SparkContext("local", "Pair RDD example")

marks=sc.parallelize([('Rahul',22),('Swati',48),('Shreya',22),('Swati',12),('Abhay',29),("Shreya",18),('Abhay',39),('Rohan',29),('Rahul',22),('Rohan',32)])

output= sc.parallelize(marks.collect())
print("--- Reduces BY ---")
print(marks.reduceByKey(lambda x,y:x+y).collect())
print()


#Display markes sorted by student name - ascending
print(marks.sortByKey('ascending').collect())

#Display markes sorted by student name - descending
print(marks.sortByKey(False).collect())

# print(marks.sortByKey(True).collect())

# create a dictionary base on the student name and all the markes for that student
print("--- Group By ---")
dict_rdd = marks.groupByKey().collect()
for key,value in dict_rdd:
    print(key,list(value))

mobile_rdd = sc.parallelize([ ('Rahul','9106548973'),('Swati','9624589300'),('Shrey','7199156589'),('Abhay','9033256169'),('Rohan','8780872535') ])
print("join")
final_rdd = marks.join(mobile_rdd)
for key,value in final_rdd.collect():
    print(key,list(value))
