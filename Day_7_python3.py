"""
Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers
"""

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))
    arr.reverse()
    print(*arr, sep=" ")
