
#import necessary libraries
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

#read the csv file of downloaded dataset from kaggle
df=pd.read_csv("student_exam_performance.csv")

print("\n Top five rows:\n")
print(df.head())
print("\n Bottom five rows:\n")
print(df.tail())

#Basic information about the dataset
print("\nDataset shape:\n")
print(df.shape)
print("\nDataset columns:\n")
print(df.columns)
print("\nDataset Information:\n")
print(df.info())
print("\nStatistical Summery:\n")
print(df.describe())

#Check missing values
print("\nMissing values:")
print(df.isnull().sum())
#Remove duplicate rows
print("\nNumber of duplicate rows:")
print(df.duplicated().sum())

df=df.drop_duplicates()

#handling missing values
df["previous_gpa"]=df["previous_gpa"].fillna(df["previous_gpa"].median())
df["time_management_score"]=df["time_management_score"].fillna(df["time_management_score"].mean())
print("\nMissing values after cleaning:")
print(df.isnull().sum())

