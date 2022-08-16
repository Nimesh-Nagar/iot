#q8 Find salespeople located either in Barcelona or London

from pyspark.sql import SparkSession

spark = SparkSession.builder.appName('demo').getOrCreate()

df = spark.read.csv('salespeople.txt',inferSchema=True,header=True)
df.createOrReplaceTempView('sale_tbl')

spark.sql(''' SELECT *
            FROM sale_tbl 
            WHERE 'city' == 'Barecelona' ''').show()

