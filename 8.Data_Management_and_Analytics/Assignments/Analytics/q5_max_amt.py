# 5. For every salesperson, find out the maximum order amount for each date.

from pyspark.sql import SparkSession
from pyspark.sql.functions import col
spark = SparkSession.builder.appName("count order").getOrCreate()

#Read order and salespeople file
order = (spark.read.format("csv").option("inferSchema","true").option("header","true").load("orders.txt"))
salesp = (spark.read.format("csv").option("inferSchema","true").option("header","true").load("salespeople.txt"))

joinData = order.join(salesp, order.snum == salesp.snum, "inner")

print("USing DATA FRAME")
joinData.select(['sname','odate','amount']).groupBy('sname','odate').max('amount').orderBy(col('odate')).show()

#using Spark sql
order.createOrReplaceTempView("order_table")
salesp.createOrReplaceTempView("sales_table")

spark.sql("""SELECT s.sname,o.odate,max(o.amount)
        FROM order_table as o inner join sales_table as s on (o.snum == s.snum)
        GROUP BY s.sname,o.odate
        ORDER BY o.odate""").show()


        