
from pyspark.sql import SparkSession

chintu = SparkSession.builder.appName("aggrigate").getOrCreate()

df = chintu.read.csv('sales_info.csv',inferSchema = True, header = True)

df.show()
df.agg({'Sales' : 'sum'}).show()
df.agg({'Sales' : 'min'}).show()
df.agg({'Sales' : 'max'}).show()
df.agg({'Sales' : 'count'}).show()
df.agg({'Sales' : 'mean'}).show()
