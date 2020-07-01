#!/usr/bin/python3

"""
script that takes in a string and sends a search request to the Star Wars API
"""

import requests
import sys

if __name__ == '__main__':
    url = 'https://swapi.co/api/people/?search={}'.format(sys.argv[1])
    r = requests.get(url)
    r = r.json()
    count = r['count']
    print("Number of result: {}".format(count))
    for idx in range(0, count):
        try:
            print(r['results'][idx]['name'])
        except Exception:
            break
