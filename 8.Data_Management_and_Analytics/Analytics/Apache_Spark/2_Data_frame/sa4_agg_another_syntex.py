from pyspark.sql import SparkSession
from pyspark.sql.functions import countDistinct, avg, count, min

spark = SparkSession.builder.appName("select").getOrCreate()

df = spark.read.csv('sales_info.csv', inferSchema = True, header = True)
df.select(countDistinct('Sales')).show()

#Earlier syntax 
df.agg({'Sales':'avg'}).show()

# Another Syntex

df.select(avg ('Sales')).show()
df.select(count ('Sales')).show()
df.select(min ('Sales')).show()

