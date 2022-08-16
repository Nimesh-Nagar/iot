#Q3 show only salespeople name and commissions.

from os import spawnlp
from pyspark import SparkFiles
from pyspark.sql import SparkSession

spark = SparkSession.builder.appName("sql").getOrCreate()
df = spark.read.csv("salespeople.txt",inferSchema=True,header=True)

print("DataFrame syntex :")
df.select(['snum', 'city', 'comm']).show()

print("SQL Syntex")

df.createOrReplaceTempView('salespeople_tbl')
spark.sql(''' SELECT sname, comm
            FROM salespeople_tbl ''').show()
