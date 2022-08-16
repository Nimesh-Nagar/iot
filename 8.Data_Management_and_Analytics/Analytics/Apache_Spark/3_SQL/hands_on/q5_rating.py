#Q5 Display customers whose rating is 100.

from pyspark.sql import SparkSession

spark = SparkSession.builder.appName('filter').getOrCreate()
heading = "`cnum` INT, `cname` STRING , `city` STRING, `rating` INT, `snum` INT "
df = spark.read.csv("customers.txt",inferSchema=False,header=False,schema=heading)

df.createOrReplaceTempView('c_data')
spark.sql('''SELECT * 
            FROM c_data
            WHERE rating == 100
            ''').show()

df.filter(df['rating'] == 100).show()