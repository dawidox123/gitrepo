#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  powtórka z petli.py
#  
#  
#  


def main(args):
	a = int(input("podaj pierwszą liczbe: "))
	b = int(input("podaj drugą liczbę: "))
    
	for i in range(a, b):
		if a <= 0:
			print("bąd")
		else:
			print(i)
    
    
	return 0
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
