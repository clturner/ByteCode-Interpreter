#!/usr/bin/python3

"""

function that finds the biggest integer of a list.

"""


def max_integer(my_list=[]):

    if len(my_list) is 0:
        return(None)
    highest = -9223372036854775808
    for num in my_list:
        if num > highest:
            highest = num
    highest = highest
    return(highest)
