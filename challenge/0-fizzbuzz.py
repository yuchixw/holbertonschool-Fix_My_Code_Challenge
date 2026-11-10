#!/usr/bin/python3
"""
FizzBuzz implementation in Python
"""
import sys


def fizzbuzz():
    if len(sys.argv) < 2:
        return

    num = int(sys.argv[1])
    for i in range(1, num + 1):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz", end=" ")
        elif i % 3 == 0:
            print("Fizz", end=" ")
        elif i % 5 == 0:
            print("Buzz", end=" ")
        else:
            print(i, end=" ")
    print()

if __name__ == '__main__':
    fizzbuzz()
