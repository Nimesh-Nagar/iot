# 2. Find which customer is served by which salesperson. Display the customer name and salesperson name for all matching cases.

from pyspark.sql import SparkSession
from pyspark.sql.functions import *

spark = SparkSession.builder.appName("service").getOrCreate()

customer = spark.read.csv("customers.txt",inferSchema=True,header=True)
salesperson = spark.read.csv("salespeople.txt",inferSchema=True,header=True)

data = customer.join(salesperson, customer.snum == salesperson.snum)
# data.show()

data.select(col('cname'),col('sname')).show()

#----------------------------------------------------------
print("OUTPUT from Spark SQL : ")

customer.createOrReplaceTempView("cust_tbl")
salesperson.createOrReplaceTempView("sale_tbl")
spark.sql(''' SELECT cname, sname
               FROM cust_tbl ct INNER JOIN sale_tbl st ON(ct.snum == st.snum)
               ''' ).show()



