"""
filter function  : filter(function, iterable)
                 : Returns items form iterable based on some criteria

"""
def is_passing(grade):
    return grade >= 60

grades = [91, 32, 83, 44, 75, 56, 67]

# passing_grade = list(filter(is_passing, grades))
passing_grade = list(filter(lambda grade: grade >= 60, grades))

print(passing_grade)