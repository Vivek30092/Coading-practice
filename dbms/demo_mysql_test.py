import mysql.connector
from connector import my_connector


# mydb = mysql.connector.connect(
#     host = "localhost",
#     user = "root",
#     password = "v1430"
# )

mycursor = my_connector.cursor()
mycursor.execute("show databases")
