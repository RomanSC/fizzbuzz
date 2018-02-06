#!/usr/bin/python3

""" main.py | Fizz Buzz | Roman S. Collins | Tue, Feb 06, 2018

    Fizz Buzz in Python 3.6

"""


def main():
    for i in range(1, 101):
        x = True
        if i % 3 == 0 and i % 5 == 0:
            print("fizzbuzz")
            x = False
            continue

        if i % 3 == 0:
            print("fizz")
            x = False
            continue

        if i % 5 == 0:
            print("buzz")
            x = False
            continue

        if x:
            print(i)
            continue

if __name__ == "__main__":
    main()
