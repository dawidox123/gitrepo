#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  zabawa.py
#  
#  
#  


def main(args):
    a = int(input("podaj liczbe: "))
    b = int(input("podaj liczbe: "))
    wynik = 1
    for i in range(a > b):
        wynik = wynik*a
    else:
        wynik = wynik*b
    print(wynik)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
