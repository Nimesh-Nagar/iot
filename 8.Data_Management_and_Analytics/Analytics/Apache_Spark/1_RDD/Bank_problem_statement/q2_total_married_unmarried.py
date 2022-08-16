from pyspark import SparkContext

sc = SparkContext() # initilize 

output = sc.textFile("bank.csv")

count= output.map(lambda x : (x.split(',')[2],1) )\
    .filter( lambda x:(x[0] != 'single'))\
    .reduceByKey( lambda x,y : x + y).collect()
print(count)

