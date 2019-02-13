#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kompresja.py
#  
#  

def wspolczynnik1(Vk, Vnk):
    return Vk/Vnk

def main(args):
    Vk=input('rozmiar danych skompresowanych: ')
    Vnk=input('rozmiar danych nieskompresowanych: ')
    
    print("dane zmniejszyły się o: ", wspolczynnik1(Vk, Vnk))
    print("zaoszczędzone miejsce: ", wspolczynnik2(Vk, Vnk))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
