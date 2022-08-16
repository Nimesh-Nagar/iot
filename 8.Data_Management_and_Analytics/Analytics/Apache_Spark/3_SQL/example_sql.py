from pyspark.sql import SparkSession

spark = SparkSession.builder.appName("spark_SQL Demo").getOrCreate()

csv_file = "appl_stock.csv"

df = (spark.read.format("csv").option("inferSchema","true").option("header","true").load(csv_file))

df.createOrReplaceTempView("stock_tbl") # virtual table

spark.sql('''SELECT Date, Open, Close
            FROM stock_tbl
            WHERE Close < 500''').show()

