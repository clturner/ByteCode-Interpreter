#!/usr/bin/python3

"""
 function that returns the weighted average of all integers tuple (<score>, <weight>)

"""


def weight_average(my_list=[]):

    if my_list is None:
        return(0)

    count = 0
    devide = 0
    devisor= 0

    for x in my_list:
        count = 0
        for y in x:
            if count == 0:
                first = float(y)
            if count == 1:
                second = float(y)
            count += 1

        devide = devide + (first * second)
        devisor = devisor + second

    avg = devide / devisor
    return(avg)
