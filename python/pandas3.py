import pandas as pd
import numpy as np
import statistics as stats
import seaborn as sns
import matplotlib.pyplot as plt


path = "C:/Users/housh/Desktop/vivek/coading/python/auto.csv"
df = pd.read_csv(path)
df.replace("?", np.nan, inplace=True)

# #to check types of value in data
# print(df.dtypes)
# print(df[['bore', 'stroke', 'compression-ratio', 'horsepower']].dtypes)

# #to check data type fo column peak-rpm
# print(df['peak-rpm'].dtypes)

# # to find correlation in column {module 3,question 2)}
# # first converting object data type into float
# df[["bore", "stroke", "compression-ratio", "horsepower"]] = df[
#     ["bore", "stroke", "compression-ratio", "horsepower"]
# ].astype(float)
# # using .corr() calculating correlation
# correlation_matrix = df[["bore", "stroke", "compression-ratio", "horsepower"]].corr()
# print(correlation_matrix)

# #to find correlation between price and stroke {module 3,question 3.a}
# df[['price','stroke']]=df[
#     ['price','stroke']
# ].astype(float)
# correlation_matrix=df[['price','stroke']].corr()
# print(correlation_matrix)


# # to create a plot between price and stroke
# sns.regplot(x="price", y="stroke", data=df)
# plt.ylim(0,)
# # to create boxplots by sns to represent data
# sns.boxplot(x="stroke", y="price", data=df)

# # to describe table with min,max,iqr,std ,count and it excludes series having object data type
# print(df.describe())
# # to describe table with count, unique,top,freq including object data type
# print(df.describe(include=['object']))

# # to count values in series
# print(df['fuel-type'].value_counts())
# # to convert above data into dataframe
# print(df['fuel-type'].value_counts().to_frame())


print(df["drive-wheels"].unique())