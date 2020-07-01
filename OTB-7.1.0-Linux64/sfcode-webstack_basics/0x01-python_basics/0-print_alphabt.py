#!/usr/bin/python3

"""
Prints the alphabet a to z
"""

for letter in range(ord('a'), ord('z') + 1):
    if chr(letter) is 'q' or chr(letter) is 'e':
        pass
    else:
        print("{}".format(chr(letter)), end="")
