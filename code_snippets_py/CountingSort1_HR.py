#!/bin/python3

import math
import os
import random
import re
import sys

def countingSort(arr):
    new_arr = [0]*100
    for ele in arr:
        new_arr[ele]+=1
    return new_arr

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    result = countingSort(arr)
    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')
    fptr.close()
