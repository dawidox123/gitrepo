#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-for
#  
#  
#  



def main(args):
    
    start = int(input("podaj pierwszą liczbe: "))
    
    stop = int(input("podaj drugą liczbę: "))
    
    while start >= stop:
        print("błąd")
        stop = int(input("podaj drugą liczbę: "))
        
    
    
    
    if start >= stop:
        print("błędne dane")
        exit(0)
    
    
    
    for i in range(start, stop + 1):
        if i % 2 == 0:
            print(i)
        else:
            print("nieparzysta")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
