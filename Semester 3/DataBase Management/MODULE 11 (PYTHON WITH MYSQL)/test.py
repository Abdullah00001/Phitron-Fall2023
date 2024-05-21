import mysql.connector

mydb=mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="12457"
    
)

print(mydb)