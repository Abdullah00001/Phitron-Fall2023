import mysql.connector

dbName = "dadarbank"

dbConnection = mysql.connector.connect(
    host="127.0.0.1", user="root", passwd="12457", database=dbName
)

myCursor = dbConnection.cursor()

count = 0

while count < 3:
    name = input("Name : ")
    email = input("Email : ")
    address = input("Address : ")
    insertIn_admin = """ 
                INSERT INTO admin(name,email,address)
                VALUES(%s,%s,%s)
                """
    myCursor.execute(insertIn_admin, (name, email, address))
    dbConnection.commit()
    count += 1
