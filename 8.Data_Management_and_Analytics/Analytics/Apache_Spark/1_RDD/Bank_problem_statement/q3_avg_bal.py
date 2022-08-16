# q3 find the average balance of blue-collar divorced people

from soupsieve import select
from pyspark import SparkContext
sc= SparkContext("local","avg balance of blue-collar")

bankData=sc.textFile("bank.csv")
'''
job=data.map(lambda x:((x.split(',')[1]),(x.split(',')[2]), int(x.split(',')[5]))).filter(lambda x:(x[0]=='blue-collar') and (x[1]=='divorced'))
avg = job.map(lambda x:(x[1],x[2]))\
    .reduceByKey( lambda x,y: x+y)    
cout = job.map(lambda x : (x[1],x[2],x[5],1) ).countByKey().items
for key,value in cout:
    print(key,value)
print(avg.collect())
'''
bankLines = bankData.map(lambda l : l.split(','))
selectBankFeids = bankLines.map(lambda x : (x[1],x[2],x[5]))
filtereData = selectBankFeids.filter(lambda f: (f[0]=='blue-collar' and f[1]=='divorced'))
onlyBalance = filtereData.map(lambda x: int((x[2])))
balanceList = onlyBalance.collect()

avgBal = sum(balanceList)/len(balanceList)

print("Average Balance is : %d "%avgBal)









