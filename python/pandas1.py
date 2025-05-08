import pandas as pd
import numpy as np 
path = "C:/Users/housh/Desktop/vivek/coading/python/auto.csv"
df = pd.read_csv(path) 
# create headers list
# headers = ["symboling","normalized-losses","make","fuel-type","aspiration", "num-of-doors","body-style",
#          "drive-wheels","engine-location","wheel-base", "length","width","height","curb-weight","engine-type",
#          "num-of-cylinders", "engine-size","fuel-system","bore","stroke","compression-ratio","horsepower",
#          "peak-rpm","city-mpg","highway-mpg","price"]
# df.columns=headers
# df1=df.replace('?',np.nan)
# print("headers\n", headers)
# print(df1.head(10))
# print(df1.columns)     #print column name
# df.to_csv(path)    #to save file
# print(df.dtypes)  #to gather data types of column
# print(df.describe())      #to describe data as min, max ,mean ,median, count,std deviation
# print(df.describe(include="all"))    #same as describe bt also include freq,top , unique,
print(df[['length','compression-ratio']].describe())
