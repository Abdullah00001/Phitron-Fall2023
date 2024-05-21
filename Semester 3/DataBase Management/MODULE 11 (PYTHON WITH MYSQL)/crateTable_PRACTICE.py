import mysql.connector

dbName="dadarbank"

myConnection = mysql.connector.connect(
    host="127.0.0.1", user="root", passwd="12457", database=dbName
)

myCursor = myConnection.cursor()

adminTABLE = """ 
            CREATE TABLE admin(
                name varchar(20),
                email varchar(25),
                address varchar(50)
            )
            """

myCursor.execute(adminTABLE)
