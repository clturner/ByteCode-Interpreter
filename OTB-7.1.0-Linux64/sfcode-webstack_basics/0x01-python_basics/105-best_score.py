#!/usr/bin/python3

"""
function that returns a key with the biggest integer value.
"""


def best_score(my_dict):

    if my_dict is None:
        return(None)

    highest = 0
    check_list = []

    for k, v in my_dict.items():
        check_list.append(v)

    for k, v in my_dict.items():

        if v > highest:
            highest = v
            highest_key = k

        if check_list.count(highest) > 1:
            return(None)

    return(highest_key)
