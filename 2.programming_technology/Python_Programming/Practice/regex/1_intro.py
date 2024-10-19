""" 
A Regular Expression or RegEx is a special sequence of characters that uses a search pattern 
to find a string or set of strings.

It can detect the presence or absence of a text by matching it with a particular pattern
and also can split a pattern into one or more sub-patterns.

[CODE BASICS] : https://www.youtube.com/watch?v=sHw5hLYFaIw&t=1217s
"""

# Extract phone numbers 

import re

text = '''
Elon musk's phone number is 9991116666, call him if you have any questions on dodgecoin. Tesla's revenue is 40 billion
Tesla's CFO number (999)-333-7777
'''

pattern = '\(\d{3}\)-\d{3}-\d{4}|\d{10}' 
matches = re.findall(pattern, text)
print(matches)

