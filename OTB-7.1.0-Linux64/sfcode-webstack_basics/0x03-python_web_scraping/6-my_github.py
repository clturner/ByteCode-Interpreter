#!/usr/bin/python3

"""
script that takes in a string and sends a search request to the Star Wars API
"""
from requests.auth import HTTPBasicAuth
import requests
import sys


if __name__ == '__main__':

    user = sys.argv[1]
    pwd = sys.argv[2]
    url = 'https://api.github.com/users/'
    r = requests.get(url, auth=HTTPBasicAuth(user, pwd))
    r = r.json()
    try:
        print(r['id'])
    except:
        print("None")
