#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla_cw2.py



def main(args):
    n = int(input("podaj pierwszą liczbe: "))
    while n < 1:
        print("błąd")
        n = int(input("podaj pierwszą liczbe: "))
    
    m = int(input("podaj drugą liczbę: "))
    while m <= n:
        print("błąd")
        m = int(input("podaj drugą liczbe: "))
    
    for liczba in range(n, m + 1):
        print(liczba, " ", end="")
        
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
