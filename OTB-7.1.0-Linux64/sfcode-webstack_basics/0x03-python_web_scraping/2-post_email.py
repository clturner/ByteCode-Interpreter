#!/usr/bin/python3
"""
takes in a URL and an email address, sends a POST request to the passed URL
"""

import requests
import sys

if __name__ == '__main__':
    email = sys.argv[2]
    url = sys.argv[1]
    r = requests.post(url, data={'email': email})
    print(r.text)
