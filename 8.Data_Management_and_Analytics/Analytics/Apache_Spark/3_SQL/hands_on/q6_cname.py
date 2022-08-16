#Q6 Display all the customers in San Jose whose rating is above 200.

from pyspark.sql import SparkSession
spark = SparkSession.builder.appName("customer").getOrCreate()

header =" `cnum` INT, `cname` STRING, `city` STRING, `rating` STRING,`snum` STRING" 
df = spark.read.csv("customers.txt",inferSchema=False,header=False,schema=header)

df.createOrReplaceTempView("c_tbl")
spark.sql(''' SELECT cname, city, rating
            FROM c_tbl
            WHERE city == 'San Jose' and rating > 200
        ''').show()

