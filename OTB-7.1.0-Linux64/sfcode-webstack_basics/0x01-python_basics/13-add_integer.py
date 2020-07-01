#!/usr/bin/python3

"""
 function that adds 2 integers.
"""

def add_integer(a, b):
    try:
        if type(a) is float:
            a = int(a)
        if type(b) is float:
            b = int(b)
        c = a + b
    except:
        if type(a) is not int:
            raise TypeError("a must be integer")
        if type(b) is not int:
            raise TypeError("b must be integer")
    return(c)
