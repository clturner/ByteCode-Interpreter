#!/usr/bin/python3

"""
sends a search request to the Star Wars API
"""

import sys
import requests

if __name__ == '__main__':
    url = "https://swapi.co/api/people/?search={}".format(sys.argv[1])
    r = requests.get(url).json()
    if type(r) is not dict:
        print("Not valid jsom")
    else:
        print("Number of result: {}".format(r.get('count')))
    total_names = r.get("count")
    page = 1
    count = 0
    while count < total_names:
        r = requests.get(url, params={'page': page}).json()
        page += 1
        for x in r['results']:
            count += 1
            print(x.get("name"))
            all_films = x.get("films")
            for film in all_films:
                r = requests.get(film).json()
                print("\t{}".format(r.get('title')))
