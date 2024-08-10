# use of *args, **kwargs 

def sample_func(a, b, *args, **kwargs):
    print("a ",a)
    print("b ",b)
    print("*args ",args,"| Data Type ",type(args))
    print("**kwargs ",kwargs,"| Data Type ",type(kwargs))
    

sample_func(1, 2, 3, 4, 5, key1=6, key2="nimesh", key3=7)
