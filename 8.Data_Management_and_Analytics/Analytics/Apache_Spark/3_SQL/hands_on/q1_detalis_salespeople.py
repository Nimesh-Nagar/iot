from pyspark.sql import SparkSession

spark = SparkSession.builder.appName("hands on").getOrCreate()
df = spark.read.csv('salespeople.txt',inferSchema = True, header = True)


csv_file = "salespeople.txt"
# if file do not have headers
schema = "`snum` INT, `sname` STRING, `city` STRING, `comm` FLOAT "
df = (spark.read.format("csv").option("inferSchema","false").option("header","false").option("schema","schema").load(csv_file))

# if file do have headers
df = (spark.read.format("csv").option("inferSchema","true").option("header","true").load(csv_file))

df.createOrReplaceTempView("sales_people_tbl")

spark.sql(''' SELECT snum,sname,city,comm
              FROM sales_people_tbl ''').show()

