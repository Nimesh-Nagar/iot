from pyspark.sql import SparkSession

spark = SparkSession.builder.appName("sparkSQL groupBy").getOrCreate()

csv_file = "sales_info.csv"

df = (spark.read.format("csv").option("inferSchema","true").option("header","true").load(csv_file))

df.createOrReplaceTempView("spark_tbl")
spark.sql('''SELECT Company, AVG(Sales) as Average
            FROM spark_tbl
            GROUP BY Company''').show()