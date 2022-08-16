from email import header
from tokenize import group
from pyspark.sql import SparkSession

chintu = SparkSession.builder.appName("aggrigate").getOrCreate()
df = chintu.read.csv('sales_info.csv',inferSchema = True, header = True)

# another menthod of aggrigate
group_data = df.groupBy('Company')

group_data.agg({'Sales' : 'sum'}).show()

