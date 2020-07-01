#!/usr/bin/python3

"""
program that imports the function def add(a, b): from the file add_4.py and
prints the result of the addition 1 + 2 = 3
"""

from add_4 import add

if __name__ == "__main__":

    a = 1
    b = 2

    print("{} + {} = {}".format(a, b, add(a, b)))
