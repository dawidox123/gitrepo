#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-ćwiczenie1.py



def main(args):
    
    a = int(input("podaj pierwszą liczbe: "))
    
    
    
    while a <= 75:
        print(a)
        b = int(input("podaj drugą liczbę: "))
        print(a + b)
        
    if a + b >= 75:
        print("błąd")
        exit(0)
        
        
    
        
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
