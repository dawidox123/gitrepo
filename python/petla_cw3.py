#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla_cw2.py



def main(args):
    n = int(input("podaj pierwszą liczbe: "))
    while n < 1:
        print("błąd")
        n = int(input("podaj pierwszą liczbe: "))
    
   
    
    for liczba in range(n + 1):
        print(liczba**2, " ", end="")
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
