from dataclasses import dataclass
from pyspark.sql import SparkSession

spark=SparkSession.builder.appName("hands_on").getOrCreate()
df=spark.read.json('people.json')
df.show()
print("Schema------")
df.printSchema()
print("Columns-----")
print(df.columns)

print("Describe --- ")
df.describe().show()
print(df.describe)
