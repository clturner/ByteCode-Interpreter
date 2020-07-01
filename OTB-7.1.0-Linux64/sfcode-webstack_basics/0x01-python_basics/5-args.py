#!/usr/bin/python3

"""
Prints the number of and the list of its arguments.
"""

import sys


def main():

    if len(sys.argv) is 1:
        print("0 arguments.")
    else:
        if len(sys.argv) is 2:
            print(len(sys.argv) - 1, "argument:")
        else:
            print(len(sys.argv) - 1, "arguments:")

        for x in range(len(sys.argv)-1):
            x = x + 1
            print("{}: {}".format(x, sys.argv[x]))

if __name__ == "__main__":
    main()
