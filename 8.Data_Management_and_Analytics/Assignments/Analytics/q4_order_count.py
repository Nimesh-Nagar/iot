# 4. Find how many orders have been brought by each salesperson. 
# Display the salesperson number, name, and the number of orders in the descending sequence of orders. 

from pyspark.sql import SparkSession
from pyspark.sql.functions import col
spark = SparkSession.builder.appName("count order").getOrCreate()

#Read order and salespeople file
order = (spark.read.format("csv").option("inferSchema","true").option("header","true").load("orders.txt"))
salesp = (spark.read.format("csv").option("inferSchema","true").option("header","true").load("salespeople.txt"))

joinData = order.join(salesp, order.snum == salesp.snum, "inner")

print("USing DATA FRAME")
count = joinData.select(['sname','onum']).groupBy(col('sname')).count()
count.orderBy(col('sname').desc()).show()

print("USING SPARK SQL")
order.createOrReplaceTempView("order_sql")
salesp.createOrReplaceTempView("sales_sql")

spark.sql(""" SELECT s.sname, COUNT (o.onum) Total_Orders
            FROM order_sql o INNER JOIN sales_sql s ON(o.snum == s.snum)
            GROUP BY s.sname
            ORDER BY COUNT(o.onum) DESC  """).show()




