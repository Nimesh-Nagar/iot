# Q5 find job and balance that have balance value higher than the avg of blue-collar people
import sys

from pyspark import SparkContext, SparkConf
sc=SparkContext("local","total and avg bal")

data=sc.textFile("bank.csv")
selectedFields = data.map( lambda x : ((x.split(',')[1]),int(x.split(',')[5])) )

filterData = selectedFields.filter(lambda x : x[0]=='blue-collar')

#only get the balance feilds 
onlyBalance = filterData.map(lambda x : int(x[1]))

#convert to a list
balanceList = onlyBalance.collect()
avgBal = sum(balanceList)/len(balanceList)

print("Average of Blue-collar is %d"% avgBal)

higherThanBlueCollar = selectedFields.filter(lambda f: int(f[1]>avgBal))

#print the output
for ele in higherThanBlueCollar.collect():
    print("JOB IS %s and BALANCE IS %d "% (ele[0],ele[1]))

higherThanBlueCollar.saveAsTextFile("saveFile/")
