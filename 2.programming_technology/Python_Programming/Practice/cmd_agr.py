from sys import argv

print("List Command Line Arguments : ",argv)

args = argv[1:]
strings = ''

for x in args:
    strings = strings + "" + x
print("Strings :--- ",strings)