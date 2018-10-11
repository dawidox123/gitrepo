#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py
#  
#  
#  
#  

def potega_it(a, n):
    wynik = 1
    for i in range(n):
        print(wynik)
        wynik = wynik * a
    
    return wynik
    

def main(args):
    potega_it(3, 4)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
