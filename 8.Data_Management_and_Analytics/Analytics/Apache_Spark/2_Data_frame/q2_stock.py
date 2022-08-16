from pyspark.sql import SparkSession
spark = SparkSession.builder.appName('Basics').getOrCreate()

df = spark.read.csv('appl_stock.csv', inferSchema = True, header = True)
df.printSchema()

df.filter("close < 500").show()
df.filter("close < 500").select(["open","close"]).show()
df.filter((df['close']<500)&(df['open']>200)).select(['open','close']).show(10)
