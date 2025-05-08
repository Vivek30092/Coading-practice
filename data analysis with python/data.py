import requests
import numpy as np 
import pandas as pd


# #to download file from provided URL
# url = "https://cf-courses-data.s3.us.cloud-object-storage.appdomain.cloud/IBMDeveloperSkillsNetwork-DA0101EN-SkillsNetwork/labs/Data%20files/auto.csv"
local_file = "auto.csv"

# response = requests.get(url)
# if response.status_code == 200:
#     with open(local_file, "wb") as file:
#         file.write(response.content)
#     print("File downloaded successfully.")
# else:
#     print("Failed to download file.")
# # Load dataset
df = pd.read_csv(local_file, header=None)
# print(df.tail(10))



# # methods to read data
# df=pd.read_csv("auto.csv",header=None)
# # to print entire data frame
# df

# # to print top n data
# df.head(10)

# # to print bottom n data
# df.tail(10)


# add header to the data
# create headers list
headers = ["symboling","normalized-losses","make","fuel-type","aspiration", "num-of-doors","body-style",
         "drive-wheels","engine-location","wheel-base", "length","width","height","curb-weight","engine-type",
         "num-of-cylinders", "engine-size","fuel-system","bore","stroke","compression-ratio","horsepower",
         "peak-rpm","city-mpg","highway-mpg","price"]
df.columns=headers

# Ensure headers and df.columns have the same length
if len(headers) != len(df.columns):
    print(f"Mismatch! df has {len(df.columns)} columns, but headers has {len(headers)} elements.")
    headers = headers[:len(df.columns)]  # Trim headers if too many

df.columns = headers  # Assign headers to DataFrame

#to add file by providing path
df.to_csv(local_file)

# replace the "?" symbol with NaN so the dropna() can remove the missing values
df1=df.replace('?',np.nan)

# #drop missing values along the column "price"
# df=df1.dropna(subset=["price"], axis=0)

# # to get name of the columns
# print(df.columns)

