from pyspark.sql import SparkSession
spark = SparkSession.builder.appName('Basics').getOrCreate()

df = spark.read.csv('appl_stock.csv', inferSchema = True, header = True) # json,csv,txt
df.printSchema()

df.filter("close < 500").show()
df.filter("close < 500").select(["open","close"]).show()
