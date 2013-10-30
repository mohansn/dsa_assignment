#!/usr/bin/python
arr=dict(enumerate(map(float, raw_input('Enter the array: ').split()),1))
""" {1: 1st num, 2: 2nd num, ... } """
print "Max is %.2f at %d"% [(arr[key],key) for key in arr if arr[key] == max(arr.values())][0]
