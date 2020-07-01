#!/usr/bin/python3

"""
 function that replaces an element of a list at a specific position.
"""


def replace_in_list(my_list, idx, element):

    if idx > len(my_list) - 1 or idx < 0:
        return(my_list)
    else:
        my_list.pop(idx)
        my_list.insert(idx, element)
        return(my_list)
