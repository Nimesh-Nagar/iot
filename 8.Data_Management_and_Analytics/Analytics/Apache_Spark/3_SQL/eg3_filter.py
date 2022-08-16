from pyspark.sql import SparkSession

spark = SparkSession.builder.appName("spark_SQL Demo").getOrCreate()

csv_file = "appl_stock.csv"

df = (spark.read.format("csv").option("inferSchema","true").option("header","true").load(csv_file))

df.createOrReplaceTempView("stock_tbl")

spark.sql('''SELECT *
            FROM stock_tbl
            WHERE low == 197.16''').show()