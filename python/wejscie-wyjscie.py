
#  
#  

def suma2():
    """
    funkcja zsumuje dwie liczby
    """
    return a + b

def main(args):
    a = int(input("podaj pierwszą liczbe: "))
    print(a)
    b = int(input("podaj drugą liczbę: "))
    print(b)
    
    #suma(a, b)
    print("suma:", suma2(a, b))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
