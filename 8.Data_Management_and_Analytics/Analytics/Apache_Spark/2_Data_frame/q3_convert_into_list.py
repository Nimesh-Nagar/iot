from pyspark.sql import SparkSession
spark = SparkSession.builder.appName(" collect fun").getOrCreate()

df = spark.read.csv('appl_stock.csv', inferSchema=True, header = True)

# collect() will store python data into list
filtered = df.filter(df['Low']==212).collect()
print(filtered)

