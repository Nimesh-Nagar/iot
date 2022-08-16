#Q4 FInd the total and Average balance for each type of job.
import sys
from pyspark import SparkContext, SparkConf

sc=SparkContext("local","total and avg bal")

data=sc.textFile("bank.csv")

split = data.map(lambda x :( (x.split(',')[1]),int(x.split(',')[5])))
reduce_sum = split.reduceByKey(lambda x,y: x + y)
print("Total Balance")
for element in reduce_sum.collect():
    print(element)

reduce_avg = split.groupByKey().mapValues(lambda x : sum(x)/len(x))
print("Average Balance")
for element in reduce_avg.collect():
    print(element)

# dict = split.groupByKey().collect()
# for key,value in dict:
#     print(key,value)

# print(dict.collect())
