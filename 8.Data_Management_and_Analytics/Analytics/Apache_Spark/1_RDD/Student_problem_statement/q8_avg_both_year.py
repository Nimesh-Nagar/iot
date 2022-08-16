#Q8 List of students who have higher average grade in the first year than their second year grade

# from pyspark import SparkContext, SparkConf
# sc=SparkContext()

# data = sc.textFile("student.txt")

# split=data.map(lambda x: (x.split(','))).map(lambda x : (x[0],x[1],(float(x[2]))+(float(x[3]))/2 )     )

# print(split.collect())

# **************************************************************************************************************** #
import sys
from pyspark import SparkContext, SparkConf
sc=SparkContext()

studentMarksdata = sc.textFile("student.txt")

StudentLines = studentMarksdata.map(lambda l : l.split(','))

firstYearMarks = StudentLines.filter(lambda x : x[1]=="year1")
firstYearMarksMean = firstYearMarks.map(lambda x : [x[0],x[1], (float(x[2])+float(x[3]))/2  ])
firstYearMarksMeanList = firstYearMarksMean.collect()

secondYearMarks = StudentLines.filter(lambda x : x[1]== 'year2')
secondYearMarksMean = secondYearMarks.map(lambda x : [x[0],x[1], (float(x[2])+float(x[3]))/2  ])
secondYearMarksMeanList = secondYearMarksMean.collect()

i = 0 
print("list of students whose second years marks is higher than the first years mark ")

for firstListElement in firstYearMarksMeanList: 
    secondListElement = secondYearMarksMeanList[i]  # 

    if(secondListElement[2]>firstListElement[2]):
        print("Student : %s , Second Year Aggrigate : %f , First year Agrigate : %f "%(firstListElement[0], secondListElement[2], firstListElement[2]))

        i += 1


    
