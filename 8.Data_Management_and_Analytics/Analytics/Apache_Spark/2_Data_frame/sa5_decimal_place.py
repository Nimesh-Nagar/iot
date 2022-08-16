from pyspark.sql import SparkSession
from pyspark.sql.functions import avg, format_number

spark = SparkSession.builder.appName('formate decimal place').getOrCreate()

df = spark.read.csv('sales_info.csv', inferSchema = True, header= True)

sales_avg = df.select(avg('Sales').alias('tempvar'))
sales_avg.select(format_number ('tempvar',2).alias('Average')).show() # 2 indicates => upto 2 decimal place

