# Execute this file to create “edgeData” mysql database with Tables to store data.

import mysql.connector
import time
import os

mydb = mysql.connector.connect(
    host = os.getenv('MYSQL_URL'), #"192.168.195.163",
    port = os.getenv('MYSQL_PORT'),
    user = os.getenv('MYSQL_UNAME'),
    password = os.getenv('MYSQL_PASSWD')
    # database='edgeData'
)  

mycursor = mydb.cursor()

try:

    #mycursor.execute("CREATE DATABASE edgeData")
    mycursor.execute("USE edgeData")

    # Temperature table (temp and humidity ) 
    tempData = """ CREATE TABLE IF NOT EXISTS Temperature(
                    Time_Stamp VARCHAR(255),
                    Sensor_Name VARCHAR(255),
                    Vehicle_Name VARCHAR(255),
                    Temperature FLOAT(4,2) NOT NULL,
                    Humidity FLOAT(4,2) NOT NULL

    )"""
    mycursor.execute(tempData)
    print("Temperature Table Created ")

    # vibratsion table 
    vibData = """ CREATE TABLE IF NOT EXISTS Vibration(
                    Time_Stamp VARCHAR(255),
                    Sensor_Name VARCHAR(255),
                    Vehicle_Name VARCHAR(255),
                    Vibrations_value VARCHAR(255) NOT NULL

    )"""
    mycursor.execute(vibData)    
    print("Vibration Table Created ")
    
    
except mysql.connector.DatabaseError as e:
    print(e)

mydb.close()






