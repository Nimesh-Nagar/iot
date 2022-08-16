from pyspark import SparkContext
sc=SparkContext()
output = sc.textFile("bank.csv")

data = output.map(lambda x : x.split(','))
selectFields = data.map( lambda x :( x[1],x[2],x[5])).filter(lambda y : (y[0]=='blue-collar'and y[1]=='divorced'))
onlybal = selectFields.map(lambda z :( int(z[2]) )  )
balList = onlybal.collect()

avgBal = sum(balList)/len(balList)

print(avgBal)