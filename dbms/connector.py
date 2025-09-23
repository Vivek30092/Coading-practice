import mysql.connector

def my_connect(host_name,user_name,UserPassword):
    mydb = mysql.connector.connect(
        host = host_name,
        user = user_name,
        password = UserPassword,
    )
    return mydb

def main():
    print("connecting database")
    host_name = "localhost"
    user_name = "root"
    UserPassword = "v1430"
    my_connect(host_name,user_name,UserPassword)
    print("database connected ...")
    
__init__=main()
    
    
    