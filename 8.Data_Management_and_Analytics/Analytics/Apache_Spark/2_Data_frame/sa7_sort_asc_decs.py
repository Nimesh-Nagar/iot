from pyspark.sql import SparkSession
from pyspark.sql.functions import col

spark = SparkSession.builder.appName('sortBy').getOrCreate()

df = spark.read.csv('sales_info.csv', inferSchema = True, header= True)

#only Ascending by default
df.orderBy("Sales").show()
#Another syntex for Asc and Desc
df.orderBy(col("Sales").asc()).show()
df.orderBy(col("Sales").desc()).show()
# yet another 
df.orderBy(df["Sales"].asc()).show()
df.orderBy(df["Sales"].desc()).show()


