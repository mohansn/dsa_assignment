#!/usr/bin/python

def fib(n):
    """ Returns the the first 'n' Fibonacci numbers """
    fibs=[]
    for i in range(n):
        if (i == 0 or i == 1):
            fibs.append(i)
        else:
            fibs.append(fibs[i-1]+fibs[i-2]);
    return fibs

