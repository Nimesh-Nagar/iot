from pyspark import SparkConf
from pyspark.sql import SparkSession

monkey = SparkSession.builder.appName('groupBy').getOrCreate()

df = monkey.read.csv ('sales_info.csv', inferSchema = True, header = True)

df.groupBy ("Company").mean().show()
df.groupBy ("Company").sum().show()
df.groupBy ("Company").min().show()
df.groupBy ("Company").max().show()
df.groupBy ("Company").count().show()