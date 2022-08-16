#Q7 Display all the customers who are in San Jose or rating is above 200

from pyspark.sql import SparkSession

spark = (SparkSession.builder.appName("sql").getOrCreate())
header =" `cnum` INT, `cname` STRING, `city` STRING, `rating` INT,`snum` STRING" 
df = spark.read.csv("customers.txt", inferSchema=False,header=False,schema=header)

df.createOrReplaceTempView("c_tbl")
spark.sql(''' SELECT city, rating
            FROM c_tbl
            WHERE 'city' = 'San Jose' or rating > 200
        ''').show()

df.select(['city','rating']).filter((df.city == 'San Jose') | (df.rating > 200)).show()

