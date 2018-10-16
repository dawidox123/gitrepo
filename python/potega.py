#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py

def potega_it(a, n):
    wynik = 1
    for i in range(n):
        wynik = wynik * a
        print(wynik)
    
    return wynik
    

def main(args):
   
    a = int(input("podaj podstawę "))
    n = int(input("podaj wykadnik:"))
    potega_it(a, n)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
