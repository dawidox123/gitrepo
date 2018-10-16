#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py

def potega_it(a, n):
    wynik = 1
    for i in range(n):
        wynik = wynik * a
        #print(wynik)
    
    return wynik
    

def main(args):
   # potega_it(3, 7)
    assert(potega_it(0, 2) == 0)
    assert(potega_it(2, 2) == 4)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
