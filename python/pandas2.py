import pandas as pd
import numpy as np

data = "C:/users/housh/Desktop/vivek/coading/python/auto.csv"
df = pd.read_csv(data)
df.replace("?", np.nan, inplace=True)  # replace the value


# to check value is null or not. it return True or False
# missing_data=df.isnull()
# print(missing_data.head(5))

# # Calculate the mean value for the "normalized-losses" column
# avg_norm_loss=df["normalized-losses"].astype("float").mean(axis=0)
# # print("average of normalized-losses:",avg_norm_loss)

# # Replace "NaN" with mean value in "normalized-losses" column
# df["normalized-losses"]=df["normalized-losses"].replace(np.nan,avg_norm_loss,inplace=True)

# Calculate the mean value for the "bore" column
avg_bore = df["bore"].astype("float").mean(axis=0)
print("average of bore: ", avg_bore)

# replace NaN value with avg_bore value
df["bore"].replace(
    np.nan,
    avg_bore,
)

# #replace NaN in stroke
# mean_value=df["stroke"].astype("float").mean(axis=0)
# print(mean_value)
