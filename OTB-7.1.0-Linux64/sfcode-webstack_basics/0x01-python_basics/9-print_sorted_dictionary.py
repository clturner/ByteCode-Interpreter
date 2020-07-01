#!/usr/bin/python3

"""
function that prints a dictionary by ordered keys.
"""


def print_sorted_dictionary(my_dict):

    sorted_list = []
    sorted_list = sorted(my_dict.items())
    for k, v in sorted_list:
        print("{}: {}".format(k, v))
