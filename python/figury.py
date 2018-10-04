#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury.py
#  
#  Copyright 2018  <>
#  
#  
#  
#  
def prostokat1(a, b, znak):
    for i in range(a):
        for j in range(b):
            print(znak, end='')
        print()

def prostokat2(a, b, znak):
    for i in range(a):
        for j in range(b):
            if j == 0 or j == b - 1:
            print(znak, end='')
        print()

def main(args):
    a = int(input("podaj pierwszą liczbe: "))
    b = int(input("podaj drugą liczbę: "))
    znak = input("podaj znak")
    prostokat1(a, b, znak)
    prostokat2(a, b, znak)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
