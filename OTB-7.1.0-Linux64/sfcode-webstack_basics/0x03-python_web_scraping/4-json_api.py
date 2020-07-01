#!/usr/bin/python3

"""
takes in a URL and an email address, sends a POST request to the passed URL
"""

import requests
import sys
import json


if __name__ == '__main__':

    def is_json(myjson):
        try:
            myjson = json.dumps(myjson)
            json_object = json.loads(myjson)
        except ValueError as e:
            return False
        return True

    if len(sys.argv) > 1:
        arg = sys.argv[1]
    else:
        arg = ""
    r = requests.post("http://0.0.0.0:5000/search_user", data={'q': arg}).json()
    j = r.json()
    if is_json(j) is True and len(j) is not 0:
        print("[{}] {}".format(j.get("id"), j.get("name")))
    if is_json(j) is False:
        print('Not a valid JSON')
    if is_json(j) is True and len(j) is 0:
        print("No result")
