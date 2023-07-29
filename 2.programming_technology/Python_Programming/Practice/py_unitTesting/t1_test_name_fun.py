import unittest 
from name_fun import get_formated_name

class TestNameFun(unittest.TestCase):

# Tests for 'name_function.py'.
    def test_first_last_name(self):
        formatted_name = get_formated_name('nimesh', 'nagar')
        self.assertEqual(formatted_name,'Nimesh Nagar')

    def test_first_middle_last(self):
        formatted_name = get_formated_name('nimesh','NaGaR','mahenDrA')
        self.assertEqual(formatted_name, 'Nimesh Mahendra Nagar')

if __name__ == '__main__':
    unittest.main()


    
