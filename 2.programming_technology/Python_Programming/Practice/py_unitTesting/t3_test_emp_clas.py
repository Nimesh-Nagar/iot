import unittest
from emp_class import Employee

class TestEmployee(unittest.TestCase):

    def setUp(self):
        self.my_emp = Employee('Nimesh','Nagar',65000)

    def test_give_default_raise(self):
        #test for default amt raise
        default_raise = self.my_emp.salary + Employee.raise_amt  
        salary_raise = self.my_emp.get_raise()
        self.assertEqual(salary_raise, f'Salary : {default_raise}')

    def test_give_custom_raise(self):
        #test for custom amt raise
        amt = int(input("Amount to Raise : "))
        Employee.raise_amt = amt
        test = self.my_emp.salary+amt
        salary_raise = self.my_emp.get_raise()

        self.assertEqual(salary_raise, f'Salary : {test}')

if __name__ == '__main__':
    unittest.main()