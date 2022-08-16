#Q3 Show sorted (highest to lowest) 

import pyspark
from pyspark.sql import SparkSession
from pyspark.sql.types import StructField,StructType, StringType, IntegerType, FloatType
from pyspark.sql.functions import *

spark = SparkSession.builder.appName('basic').getOrCreate()

data_schema =  [StructField('std_id', StringType(),True),
                StructField('year',StringType(),True),
                StructField('sem_1',FloatType(),True),
                StructField('sem_2',FloatType(),True)
                ]

final_struct = StructType (fields=data_schema)

df = spark.read.csv("student.txt", header=False,schema=final_struct)

filter_df = df.filter(col('year')=='year2')
avg_df = filter_df.select('std_id','year', format_number( ((df['sem_1']+df['sem_2'])/2),2).alias("Avg Marks"))

result_df = avg_df.orderBy(col('Avg Marks').desc())
result_df.show()

# For Top 3 Students
print("---For Top 3 Studends --- ")
result_df.show(3)