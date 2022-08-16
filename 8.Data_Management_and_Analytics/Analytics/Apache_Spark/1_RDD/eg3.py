from pyspark import SparkContext
sc = SparkContext("local","map and flatMap")

rdd = sc.parallelize([
    ("jan", 2019, 86000, 56),
    ("jan", 2020, 71000, 46),
    ("jan", 2021, 84000, 33),

    ("feb", 2019, 79000, 55),
    ("feb", 2020, 86000, 36),
    ("feb", 2021, 67000, 26),

    ("mar", 2019, 72000, 36),
    ("mar", 2020, 91000, 43),
    
])

# first map
my_output = rdd.map(lambda x:(x[0],x[1],x[2],x[3]*100))
my_display = my_output.collect()
print(my_display)

#now flatmap
my_output = rdd.flatMap(lambda x:(x[0],x[1],x[2],x[3]*100))
my_display = my_output.collect()
print(my_display)

