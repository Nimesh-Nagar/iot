import pandas as pd
pd.options.plotting.backend="plotly"
air_df = pd.read_csv("airlines.csv")
gph=air_df.plot.scatter(x="Airport.Code", y="Delays.Carrier")
gph.show()
