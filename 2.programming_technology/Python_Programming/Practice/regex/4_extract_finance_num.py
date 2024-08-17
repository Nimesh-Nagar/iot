#Extract only financial numbers
import re
text = '''
Tesla's gross cost of operating lease vehicles in FY2021 Q1 was $4.85 billion. 
In previous quarter i.e. FY2020 Q4 it was $3 billion.
'''

pattern = '\$([0-9\.]+)'
matches = re.findall(pattern, text)
print(matches)