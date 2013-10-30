#!/usr/bin/python

def fac(n, result = 1):
    if (n==0 or n==1):
        return 1
    else:
        return fac(n-1, result * (n-1))
