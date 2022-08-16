# Calculate averrage age and print
# corresponding DataFrame example is 2_data_frame.py

from pyspark import SparkContext
sc = SparkContext()

# spark will distribute data into different machines (parallelize) for paraller operations
dataRDD = sc.parallelize([ ("Sachin", 49),("Rahul", 51),("MSD", 40),("Sunil", 73),("Sachin", 39),("Rahul",41),("MSD", 30),("Sunil", 63) ])

# agesRDD = (dataRDD
#     .map(lambda x : (x[0],(x[1],1)))  
#     .reduceByKey (lambda x, y: (x[0]+y[0],x[1]+y[1])) 
#     .map(lambda x : (x[0], x[1][0]/x[1][1]))        
#     )
# print(agesRDD.collect())

agesRDD1 = (dataRDD.map(lambda x : (x[0],(x[1],1))))   # mapping (1 element form data, 2 element form data, hard code = 1)
#agesRDD2 = (agesRDD1.reduceByKey (lambda x, y: (x[0]+y[0],x[1]+y[1]))) # reduce by key and transform by add or avg // shuffling and totaling 
agesRDD2 = (agesRDD1.reduceByKey (lambda x, y: (x[0]+x[0],x[1]+x[1])))


agesRDD3 = (agesRDD2.map(lambda x : (x[0], x[1][0]/x[1][1])))  # average age
print(agesRDD1.collect())
print()
print(agesRDD2.collect())
print()
print(agesRDD3.collect()) 


