# Calculate averrage age and print
# corresponding RDD example is 1_rdd_map_reduced.py

from pyspark.sql import SparkSession
from pyspark.sql.functions import avg

spark = SparkSession.builder.appName("AuthorsAge").getOrCreate()

data_df = spark.createDataFrame([("Sachin", 49),("Rahul", 51),("MSD", 40),("Sunil", 73),("Sachin", 39),("Rahul",41),("MSD", 30),("Sunil", 63),["name","age"] ])

avg_df = data_df.groupBy("name").agg(avg("age")) #agg is aggrigation function
 
avg_df.show()

