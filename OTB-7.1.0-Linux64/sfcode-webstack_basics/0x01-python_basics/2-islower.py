#!/usr/bin/python3

"""
Function that checks for lowercase character.
"""


def islower(c):
    c = ord(c)
    if c > 91:
        return(1)
    else:
        return(0)
