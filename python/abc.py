#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  abc.py
#  
#  


def main(args):
    a = int(input("podaj pierwszą liczbe: "))
    b = int(input("podaj drugą liczbę: "))

    
    if a > b:
        print(a)
    elif b > a:
        print(b)
    else:
        print("rowne liczby")
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
