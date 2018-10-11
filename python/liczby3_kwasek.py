#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# liczby3.py


# 
def liczby3():
    ile = 0
    for i in range(1, 10):
        for j in range(10):
            for k in range(10):
                    if i != j != k != i:
                        print("{}{}{} ".format(i, j, k), end="")
                        ile = ile + 1
    return ile
    
#  


def main(args):
        print("\n\nLiczby 3-cyfrowe:", liczby3())
        return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
