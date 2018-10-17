#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  euklides_nwd.py
#  
#  
#  
def nwd_klasyczne(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a

def main(args):
    a = int(input("podaj pierwszą liczbe: "))
    b = int(input("podaj drugą liczbe: "))
    nwd_klasyczne(a, b)
    print("nww({},{}) = {}".format(a, b, nwd_klasyczne(a, b)))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
