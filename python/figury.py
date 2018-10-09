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
            if j == 0 or j == b - 1 or i == 0 or i == a - 1:
                print(znak, end='')
            else:
                print("/", end="")
        print()

def choinka(h, znak):
    for i in range(h):
        if i == 0:



def choinka2(h, znak):


def main(args):
    a = int(input("podaj pierwszą liczbe: "))
    b = int(input("podaj drugą liczbę: "))
    znak = input("podaj znak")
    h = int(input("podaj wysokosć choinki: "))
    prostokat1(a, b, znak)
    print()
    prostokat2(a, b, znak)
    print()
    choinka(h, znak)
    print()
    choinka2(h, znak)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
