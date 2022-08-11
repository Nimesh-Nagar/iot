import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("covid.csv")
df.plot(kind="scatter",x="Date.Month",y="Data.Deaths",title="Covid Data")
plt.show() #To show the graph
