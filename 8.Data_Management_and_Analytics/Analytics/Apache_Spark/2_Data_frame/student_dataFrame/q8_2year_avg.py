#Q8 List of students who have higher average grade in the first year than their second year grade

from pyspark.sql import SparkSession
from pyspark.sql.types import StructField,StructType, StringType, IntegerType, FloatType
from pyspark.sql.functions import format_number

spark = SparkSession.builder.appName('basic').getOrCreate()

data_schema =  [StructField('std_id', StringType(),True),
                StructField('year',StringType(),True),
                StructField('sem_1',FloatType(),True),
                StructField('sem_2',FloatType(),True)
                ]

final_struct = StructType (fields=data_schema)

df = spark.read.csv("student.txt", header=False,schema=final_struct)

firstYearData = df.filter(df['year']=='year1').select('std_id','year', format_number( ((df['sem_1']+df['sem_2'])/2),2 ).alias('Avg_Marks1'))
firstYearData.show()

secondYearData = df.filter(df['year']=='year2').select('std_id','year', format_number( ((df['sem_1']+df['sem_2'])/2),2 ).alias('Avg_Marks2'))
secondYearData.show()

join_df = firstYearData.join(secondYearData, firstYearData.std_id == secondYearData.std_id, 'full')
join_df.show()

result = join_df.filter(join_df['Avg_Marks2']>join_df['Avg_Marks1'])

result.show()


