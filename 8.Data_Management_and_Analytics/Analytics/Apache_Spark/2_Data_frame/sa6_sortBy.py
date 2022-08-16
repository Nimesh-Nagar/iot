from pyspark.sql import SparkSession

spark = SparkSession.builder.appName('formate decimal place').getOrCreate()

df = spark.read.csv('sales_info.csv', inferSchema = True, header= True)
# df.orderBy("Sales").show()
# better syntex

df.orderBy(df['Sales'].asc()).show()
df.orderBy(df['Sales'].desc()).show()

