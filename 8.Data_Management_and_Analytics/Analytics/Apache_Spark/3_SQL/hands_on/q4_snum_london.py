#Q4 Display names and commissions of all salespeople in London

from pyspark.sql import SparkSession

spark = SparkSession.builder.appName('filter').getOrCreate()

df = spark.read.csv("salespeople.txt",inferSchema=True,header=True)

#SQL 
df.createOrReplaceTempView('ap')
spark.sql(''' SELECT sname,city,comm 
            FROM ap 
            WHERE city == 'London' ''').show()

#Data Frame
df.select(['sname','city','comm']).filter(df.city == 'London').show()