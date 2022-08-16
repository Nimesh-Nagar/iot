#1. Find all the customers and salespeople who share a city (i.e. have common city).

from pyspark.sql import SparkSession
from pyspark.sql.functions import *
spark = SparkSession.builder.appName("common city").getOrCreate()

df = spark.read.csv("customers.txt", inferSchema=True,header=True)

print("Output From DataFrame Method : ")
df.filter(col('city')=='London').show()

#---------------------------------------------------------------
print("Output Form Spark SQL Method :")
df.createOrReplaceTempView("cust_tbl")
spark.sql(''' SELECT *
            FROM cust_tbl
            WHERE city =='London'
        ''').show()
