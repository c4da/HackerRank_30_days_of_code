"""
Given a base- integer, , convert it to binary (base-). 
Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation. 
When working with different bases, it is common to show the base as a subscript."""

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    if n == 1:
        print(0)
    else:
        binary = []
        while n/2:
            m = n % 2
            n = n//2
            binary.insert(0, m)
    
    count = 0
    max = 0
    for item in binary:
        if item == 1:
            count += 1
        if max < count:
            max = count
        if item == 0:
            count = 0
    print(max)
