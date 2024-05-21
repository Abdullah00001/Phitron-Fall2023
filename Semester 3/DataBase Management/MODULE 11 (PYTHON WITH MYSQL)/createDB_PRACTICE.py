import mysql.connector

ourConnection = mysql.connector.connect(host="127.0.0.1", user="root", passwd="12457")

myCursor = ourConnection.cursor()

""" myDB_Name = "dadarbank"

myDB = "CREATE DATABASE " + myDB_Name

myCursor.execute(myDB) """

""" myCursor.execute("SHOW DATABASES")

for x in myCursor:
    print(x)
 """
 
""" removeDB="DROP DATABASE " + myDB_Name """