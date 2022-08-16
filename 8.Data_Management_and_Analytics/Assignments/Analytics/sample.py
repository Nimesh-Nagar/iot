#4. Find how many orders have been brought by each salesperson. 
#Display the salesperson number, name,
#and the number of orders in the descending sequence of orders. 

from pyspark.sql import SparkSession
from pyspark.sql.functions import col

spark = (SparkSession\
        .builder\
        .appName("Q4")\
        .getOrCreate())\

order_file = "orders.txt" 
sales_file = "salespeople.txt"

#Read order file
orderDF= (spark.read.format("csv")\
            .option("inferSchema","true")\
            .option("header","true")\
            .load(order_file))

#Read sales file
salesDF = (spark.read.format("csv")\
            .option("inferSchema","true")\
            .option("header","true")\
            .load(sales_file))

joinedDF = orderDF.join(salesDF,orderDF.snum == salesDF.snum,"inner")

orderDF.createOrReplaceTempView("order_table")
salesDF.createOrReplaceTempView("sales_table")

#Using dataframe
joinedDF.select(['sname','onum']).filter(orderDF['snum']==salesDF['snum'])
joinedDF.groupBy('sname').count().orderBy(col('count').desc()).show()

#Using Spark sql
spark.sql("""SELECT s.sname,count(o.onum) Total_orders
        FROM order_table as o inner join sales_table as s on(o.snum == s.snum) 
        GROUP BY s.sname 
        ORDER BY count(o.onum) DESC """).show()