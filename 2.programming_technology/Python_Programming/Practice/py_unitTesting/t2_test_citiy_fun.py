import unittest
from city_fun import city_country_name

class TestCity(unittest.TestCase):

    def test_city_name(self):
        formatted_name = city_country_name('santiago','chile')
        self.assertEqual(formatted_name, 'Santiago, Chile')
    
    def test_city_name_popul(self):
        formatted_name = city_country_name('santiago','chiLE',650000)
        self.assertEqual(formatted_name,'Santiago, Chile - Population = 650000')

if __name__ == '__main__':
    unittest.main()



"""
Methods                      Use
assertEqual(a, b)       Verify that a == b
assertNotEqual(a, b)    Verify that a != b
assertTrue(x)           Verify that x is True
assertFalse(x)          Verify that x is False
assertIn(item, list)    Verify that item is in list
assertNotIn(item, list) Verify that item is not in list

"""