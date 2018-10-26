#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  euklides_nwd.py
#  
#  
#
def nwd_optymalne(a, b):
    while a > 0:
        a = a % b
        b = b - a
    return b
  
def nwd_klasyczne(a, b):
    licznik = 0
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
        licznik = licznik + 1
    print("powtórzeń", licznik)
    return a

def main(args):
    a = int(input("podaj pierwszą liczbe: "))
    b = int(input("podaj drugą liczbe: "))

    print("nwd({},{}) = {}".format(a, b, nwd_klasyczne(a, b)))
    print("nwd({},{}) = {}".format(a, b, nwd_optymalne(a, b)))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
