import mysql.connector

dbconection = mysql.connector.connect(host="127.0.0.1", user="root", passwd="12457")

print(dbconection)

db_Name = "DadarBank"

dbCursor = dbconection.cursor()

""" mydb = "CREATE DATABASE " + db_Name

dbCursor.execute(mydb)

dbconection.commit() """


