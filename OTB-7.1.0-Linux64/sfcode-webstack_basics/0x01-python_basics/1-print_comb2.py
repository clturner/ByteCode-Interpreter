#!/usr/bin/python3

"""
Prints 0 to 100 in two digits
"""

for num in range(0, 10):
    for numm in range(0, 10):
        if num is not 9 or numm is not 9:
            print("{}{}, ".format(num, numm), end="")
        else:
            print("{}{}".format(num, numm))
