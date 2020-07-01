#!/usr/bin/python3

"""
Class Square that defines a square
"""


class Square:

    def __init__(self, size=0):
        self.size = size

    @property
    def size(self):
        return(self.__size)

    @size.setter
    def size(self, value):
        if not type(value) is int:
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        area = size * size
        return(area)

    def my_print(self):
        if self.size == 0:
            print()
        else:
            for x in range(self.size):
                for z in range(self.size):
                    print("#", end="")
                print("#")
