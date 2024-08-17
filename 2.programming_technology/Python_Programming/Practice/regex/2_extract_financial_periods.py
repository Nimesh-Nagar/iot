# Extract financial periods from a company's financial reporting
import re 

text = '''
The gross cost of operating lease vehicles in FY2021 Q1 was $4.85 billion.
In previous quarter i.e. fy2020 Q4 it was $3 billion. 
'''

pattern = "FY\d{4} Q[1-4]"

matches = re.findall(pattern, text, re.IGNORECASE) # for case insensitive pattern match using flags
print(matches) # ['FY2021 Q1', 'fy2020 Q4']

