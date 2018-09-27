#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  
#  


def main(args):
    suma = 0
    
    
    
    while suma <= 75:
        liczba = int(input("podaj pierwszą liczbe: "))
        suma = suma + liczba
    print("suma liczb: ", suma)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
