from pyspark.sql import SparkSession

spark = SparkSession.builder.appName('Missing').getOrCreate()
df = spark.read.csv('containsNull.csv', inferSchema = True, header= True)
df.show()

# #Drops rows that have null value columns
df.na.drop().show()
 
# # A row that must have at least two-null columns to appear in the output
 df.na.drop(thresh = 2).show()

#Drops rows that have 'any null' values columns
df.na.drop(how = 'any').show()

#Drops rows that have 'all null' values columns
df.na.drop(how = 'all').show()


#Drops rows that have 'null in sales' column
df.na.drop(subset= ['Sales']).show()

# fill 'null values' with our own values
df.na.fill('DUMMY INSERT').show()  # for name column
df.na.fill(2).show() # for sales column

# Fill 'null values' with zeroes for numneric columns 
df.na.fill (0).show()

#Fill 'null values' only for name column with our own values
df.na.fill('No name', subset=['Name']).show()


