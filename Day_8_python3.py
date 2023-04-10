"""
Task
Given  names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 
You will then be given an unknown number of names to query your phone book for. 
For each  queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; 
if an entry for  is not found, print Not found instead.
"""

# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys

counter = 0
book = {}
for line in sys.stdin:
    if counter == 0:
        n = int(line)
        counter += 1
        continue
    if counter <= n:
        if line:
            entry = line.split()
            name = entry[0]
            number = entry[1]
            book[name] = number
        counter += 1
    else:
        name = line.strip()
        if name not in book:
            print("Not found")
        else:
            print(name + "=" + book[name])
