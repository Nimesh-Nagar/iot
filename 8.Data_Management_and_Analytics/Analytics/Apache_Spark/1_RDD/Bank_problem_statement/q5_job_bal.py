# Q5 find job and balance that have balance value higher than the avg of blue-collar people
import sys
from pyspark import SparkContext, SparkConf

sc=SparkContext("local","total and avg bal")

data=sc.textFile("bank.csv")
split = data.map( lambda x : ((x.split(',')[1]),int(x.split(',')[5])) )

avg = split.groupByKey().mapValues(lambda x: sum(x)/len(x))
higher=avg.filter(lambda x: (x[0]=='blue-collar'))
print(higher.collect())

higherThanBluecollar = split.filter(lambda f: (f[1]>higher))

print(higherThanBluecollar.collect())


print()

# filter= split.filter(lambda x : x[0]=='blue-collar')
# print(filter.collect())

