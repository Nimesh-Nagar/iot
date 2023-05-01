from distutils.log import error
import mysql.connector
from pymongo import MongoClient
import time
import os

temp = 0 
esp_humi = 0
vibra=""
try:
    #establishing the connection
    conn = mysql.connector.connect(
    host = os.getenv('MYSQL_URL'), 
    port = os.getenv('MYSQL_PORT'),
    user = os.getenv('MYSQL_UNAME'),
    password = os.getenv('MYSQL_PASSWD')
    # database='edgeData'
)
    

    #Creating a cursor object using the cursor() method
    cursor = conn.cursor()

    #Retrieving single row
    sql = '''SELECT * from Temperature '''

    #Executing the query
    cursor.execute(sql)
    result = cursor.fetchall();
    for row in result:
        print("Temp ",row[3])
        print("humi ", row[4])
    temp=row[3]
    esp_humi=row[4]
    print(temp)
    print(esp_humi)
    #store sql query in variable
    sql1=''' SELECT * FROM Vibration '''

    cursor.execute(sql1)
    result1 = cursor.fetchall();
    for row in result1:
        print("vibration ",row[3])
    vibra =row[3]
except:
        print("Exception thrown: {0}".format(error))
        # database_connection.rollback()
        print("Rolled back")


#Closing the connection
conn.close()

# function to insert values into document
def insertToDb(collection,temp,esp_humi,vibra):
    time.sleep(3)
    time_stamp= str(int(time.time())) # epoch time format
    vehicle_name = "v01"
    doc1 = {
        "_id":time_stamp,
        "Vehical_Name": vehicle_name,
        "temperature": temp,
        "humidity": esp_humi,
        "vibraion": vibra  
    } 
    time.sleep(10)
    collection.insert_one(doc1)
    print("Data inserted .. ")

#################### MongoDB Database ###########################

while True:
    try:    
        connect = MongoClient(os.getenv('MONGODB_URL'))
        print("Connected Successfully ")
        db = connect.fleet_data # conect to db 
        collection = db.vehical_data1  # creating or switching to "vehical_data" collection
        insertToDb(collection,temp,esp_humi,vibra)
    except:
        print("Could not connect to MongoDB")




