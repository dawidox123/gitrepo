#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  maks.py
#  
#  


def main(args):
    a = int(input("podaj pierwszą liczbe: "))
    b = int(input("podaj drugą liczbe: "))
    c = int(input("podaj trzecią liczbe: "))
    
    if a>b:
        if a>c:
            print("maks: ", a)
        else:
            print("maks: ", c)
    if b>a:
        if b>c:
            print("maks: ", b)
        else:
            print("maks: ", c)       
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
