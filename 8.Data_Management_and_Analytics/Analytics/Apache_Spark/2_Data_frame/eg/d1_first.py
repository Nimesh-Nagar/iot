from pyspark.sql import SparkSession
spark = SparkSession.builder.appName('Basic').getOrCreate()

df= spark.read.json('d1_people.json')
df.show()
df.printSchema()
print(df.describe())