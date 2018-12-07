#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py

# 5! = 1 * 2 * 3 * 4 * 5
# 5! = 4! * 5
# n! = (n-1)! * n
def silnia_re(n):
    if n == 0:
        return 1
    return silnia_re(n-1) * n


def silnia_it(n):
    wynik = 1
    for i in range(1, n + 1):
        wynik = wynik * i
        print(wynik)
    
    return wynik
    

def main(args):
    #n = int(input("podaj liczbę: "))
    #print("{}! ={}".format(n, silnia_it(n)))
    assert(silnia_it(0) == 1)
    assert(silnia_re(4) == 24)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
