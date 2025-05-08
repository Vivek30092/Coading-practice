#to print the current directory
import os
import sys
add = "C:/Users/housh/Desktop/vivek/coading/python"
dirs = os.listdir(add)
for file in dirs:
    print(file)