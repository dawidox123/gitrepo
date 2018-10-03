#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma-cyfr.py
#  
#  Copyright 2018  <>
#  
#  
#  
#  


def main(args):
    n = int(input("podaj pierwszą liczbe: "))
    
    while n < 10:
        print("błąd")
        n = int(input("podaj pierwszą liczbe: "))
        
    suma = 0
    while n > 0:
        suma = suma + (n % 10)
        n = int(n / 10)
    print("suma:", suma)
        
    
    
    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
