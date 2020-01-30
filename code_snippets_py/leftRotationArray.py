#!/bin/python3

import math
import os
import random
import re
import sys

'''
#rotaion one by one 
# log(n*d)
def leftRotateByOne(a,n):
    temp = a[0]
    for i in range(1,n):
        a[i-1] = a[i]
    a[n-1] = temp

def leftRotation(a,n,d):
    d = d % n
    for i in range(d):
        leftRotateByOne(a,n)
    return a
    '''

# log(n)
def leftRotation(a,n,d):
    d=d%n
    temp = []
    count  = 0
    for i in range(d):
        temp.append(a[i])
    for i in range(d,n):
        a[i-d] = a[i]
    for i in range(n-d,n):
        a[i] = temp[count]
        count = count + 1
    return a


if __name__ == '__main__':
    nd = input().split()
    n = int(nd[0])
    d = int(nd[1])
    a = list(map(int, input().rstrip().split()))
    a = leftRotation(a,n,d)
    print(*a,sep=' ')
