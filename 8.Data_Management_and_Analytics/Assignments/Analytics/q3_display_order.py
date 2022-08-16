#3 Display all the order numbers along with the name of the customer who placed that order.

from pyspark.sql import SparkSession
from pyspark.sql.functions import col

spark = SparkSession.builder.appName("order details").getOrCreate()

order_details = spark.read.csv("orders.txt",inferSchema=True,header=True)
customer_details = spark.read.csv("customers.txt",inferSchema=True,header=True)

# using data frame
data = order_details.join(customer_details, order_details.cnum == customer_details.cnum, 'inner')
print("Output form Data Frame")
# data.show()
data.select(['onum','cname']).show()

# using spark sql
order_details.createOrReplaceTempView("order_tbl")
customer_details.createOrReplaceTempView("customer_tbl")

spark.sql(''' SELECT onum, cname
            FROM order_tbl o INNER JOIN customer_tbl c ON(o.snum == c.sum)
            WHERE o.snum == c.snum
''' ).show()




