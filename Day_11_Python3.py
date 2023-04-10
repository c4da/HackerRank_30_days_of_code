#!/bin/python3
"""
Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum.
"""

import math
import os
import random
import re
import sys

def getThreeInlineValues(arr:list, i:int, j:int):
    return arr[i][j] + arr[i][j+1] + arr[i][j+2]

def getHourglassMatrixes(arr:list, i:int, j:int):
    sub_sum = 0
    sub_sum += getThreeInlineValues(arr, i, j)
    sub_sum += arr[i + 1][j + 1]
    sub_sum += getThreeInlineValues(arr, i+2, j)
    return sub_sum
    

if __name__ == '__main__':

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
        
    for i in range(len(arr) - 2):
        for j in range(len(arr[0]) - 2):
            sub_sum = getHourglassMatrixes(arr, i, j)
            if i == 0 and j == 0:
                max_sum = sub_sum
            if (sub_sum > max_sum):
                max_sum = sub_sum
    
    print(max_sum)
