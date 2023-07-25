
class Student:
    
    def __init__(self, name, age, grade):
        self.name = name
        self.age = age
        self.grade = grade

    def get_grade(self):
        return self.grade
    
class Course:

    def __init__(self, c_name, max_students):
        self.c_name = c_name
        self.max_students = max_students
        self.student = []
        
    def add_students(self, student):
        if len(self.student) < self.max_students:
            self.student.append(student)
            return True
        return False
    
    def get_average_grade(self):
        value = 0
        for student in self.student:
            value += student.get_grade()
            
        return value/len(self.student)
    
    
s1 = Student("Tim", 19, 95)
s2 = Student("Jim", 19, 75)
s3 = Student("Bill", 18, 65)
            
c = Course("Science", 2)
c.add_students(s1)
c.add_students(s2)
print(c.add_students(s3)) # if we add another student 




print(c.get_average_grade())
