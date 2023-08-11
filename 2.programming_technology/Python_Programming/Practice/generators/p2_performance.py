""" PERFORMANCE : 

"""
import memory_profiler
import random
import time 

names = ['Sujit','Sushant','Nimesh']
majors = ['BD','CS','IOT']

print('Memory (Before): {} Mb'.format(memory_profiler.memory_usage()))

def people_list(num_people):
    result = []
    for i in range(num_people):
        person = {
            'id': i,
            'name': random.choice(names),
            'major': random.choice(majors)
        }
        result.append(person)
    return result

def people_generator(num_people):

    for i in range(num_people):
        person = {
            'id': i,
            'name': random.choice(names),
            'major': random.choice(majors)
        }
    yield person 
    
    
# t1 = time.clock_gettime
# people = people_list(10000000)
# t2 = time.clock_gettime

people = list(people_generator(10000000))

print('Memory (After): {} Mb '.format(memory_profiler.memory_usage()))
# print("Took {} Seconds ".format(t2-t1))
