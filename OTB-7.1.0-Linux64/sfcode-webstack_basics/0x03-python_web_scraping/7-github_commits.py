#!/usr/bin/python3

"""
script that takes in a string and sends a search request to the Star Wars API
"""

import requests
import sys

if __name__ == "__main__":
    o = sys.argv[1]
    r = sys.argv[2]
    url = 'https://api.github.com/repos/{}/{}/commits'.format(o, r)
    r = requests.get(url)
    res = r.json()
    if len(res) < 10:
        count = len(res)
    else:
        count = 10
    for x in range(0, count):
        result = res[x]
        sha = result.get('sha')
        name = result.get("commit").get("author").get("name")
#        b = res[x]['commit']['author']['name']
        print("{} {}".format(sha, name))
        count = count - 1
