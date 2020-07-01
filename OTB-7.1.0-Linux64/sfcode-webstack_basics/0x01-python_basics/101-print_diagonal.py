#!/usr/bin/python3

"""

function that draws a diagonal line on the terminal.
"""


def print_diagonal(n):

    if n <= 0:
        print("\n")
    for x in range(n):
        for y in range(n):
            if x == y:
                print("\\")
                break
            else:
                print(" ", end="")
