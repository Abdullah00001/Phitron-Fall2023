import mysql.connector

dbNAme = "dadarbank"

dbConnection = mysql.connector.connect(
    host="127.0.0.1", user="root", passwd="12457", database=dbNAme
)


myCursor = dbConnection.cursor()

adminTable = """ 
            UPDATE admin
            SET name = 'bin'
            WHERE name = 'abdullah'
            """

myCursor.execute(adminTable)
dbConnection.commit()
print("Update Successful")
