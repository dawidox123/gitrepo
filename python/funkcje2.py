#!/usr/bin/env python
# -*- coding: utf-8 -*-
#

def sumuj(a, b):
    """
    Funkcj zwracz sumę dwóch podanych liczb
    """
    return a + b

def roznica(a, b):
    """
    Funkcj zwracz sumę dwóch podanych liczb
    """
    return a - b
    
    
def iloczyn(a, b):
    return a * b    

def main(args):
    a = int(input("podaj pierwszą liczbe: "))
    b = int(input("podaj drugą liczbę: "))

    print(sumuj(a, b))
    print(roznica(a, b))
    print(iloczyn(a, b))


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
