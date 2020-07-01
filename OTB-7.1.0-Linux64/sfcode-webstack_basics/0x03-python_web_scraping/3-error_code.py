#!/usr/bin/python3

"""
takes in a URL and an email address, sends a POST request to the passed URL
"""

import requests
import sys

if __name__ == '__main__':
    url = sys.argv[1]
    r = requests.get(url)
    if r.status_code >= 400:
        print("Error code: {}".format(r.status_code))
    else:
        print(r.text)
