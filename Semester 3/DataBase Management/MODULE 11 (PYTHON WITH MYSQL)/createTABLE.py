import mysql.connector

dbName = "dadarbank"

dbConnection = mysql.connector.connect(
    host="127.0.0.1", user="root", passwd="12457", database=dbName
)

myCursor = dbConnection.cursor()

clientTable = """ 
                CREATE TABLE Client(
                    balance int,
                    accountType varchar(15),
                    accountNumber int
                )
                """

myCursor.execute(clientTable)
