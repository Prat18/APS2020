#!/bin/python3
import math
import os
import random
import re
import sys

def countingValleys(n, s):
    count = 0
    summ = 0
    prev_sum=0
    for x in range(n):
        if s[x]=='U':
            summ +=1
        if s[x]=='D':
            summ +=-1
        if summ == 0 and prev_sum < 0:
            count+=1
        prev_sum = summ
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    s = input()
    result = countingValleys(n, s)
    fptr.write(str(result) + '\n')
    fptr.close()
