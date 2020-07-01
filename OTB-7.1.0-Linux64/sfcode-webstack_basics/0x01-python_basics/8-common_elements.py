#!/usr/bin/python3

"""
Function that returns a set of common elements in two sets.
"""


def common_elements(set_1, set_2):
    shared = set()
    for x in set_1:
        for y in set_2:
            if x is y:
                shared.add(y)
    return(shared)
