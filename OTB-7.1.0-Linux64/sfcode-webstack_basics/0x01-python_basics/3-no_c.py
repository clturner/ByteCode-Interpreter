#!/usr/bin/python3

"""
 function that removes all c and C of a string and return the new string.
"""


def no_c(str):
    new_str = ""
    for letter in str:
        if letter is not 'c' and letter is not 'C':
            new_str = new_str + letter
    return(new_str)
