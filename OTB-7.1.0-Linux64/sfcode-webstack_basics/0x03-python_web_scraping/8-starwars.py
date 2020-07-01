#!/usr/bin/python3

"""
sends a search request to the Star Wars API
"""


import sys
import requests

url = "https://swapi.co/api/people/?search={}".format(sys.argv[1])
r = requests.get(url).json()
print("Number of result: {}".format(r['count']))
total_names = r['count']
page = 2

count = 0
for x in r['results']:
    count += 1
    print(x['name'])
while count < total_names:
    r = requests.get(url, params={'page': page}).json()
    page += 1
    for x in r['results']:
        count += 1
        print(x['name'])
