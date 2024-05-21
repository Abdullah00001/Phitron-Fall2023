import mysql.connector

dbname = "dadarbank"

dbConnection = mysql.connector.connect(
    host="127.0.0.1", user="root", passwd="12457", database=dbname
)

myCursor = dbConnection.cursor()

cnt = 2

while cnt > 0:
    aname = input("type your name : ")
    aemail = input("type your email : ")
    aaddress = input("type your address : ")

    dataInsert = """ 
                INSERT INTO admin(name,email,address)
                VALUES(%s,%s,%s)
                """
    myCursor.execute(dataInsert, (aname, aemail, aaddress))
    dbConnection.commit()
    print("Data insert Successful")
    cnt -= 1
