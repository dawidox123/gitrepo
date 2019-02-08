/*
 * konwersje.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

void dec2any(int l, int p) {
    int r[8];
    int i = 0;
    do{
       r[i] = l%p;
       l = l/p;
       i++; 
    }while(l != 0);
    
    for (i=i-1;i>=0;i--) {
        cout << r[i];
    }
}

int main(int argc, char **argv)
{
    int l = 0;
    int p = 0;
    cout << "podaj liczbe: ";
    cin >> l;
    cout << "podaj podstawe: ";
    cin >> p;
    dec2any(l, p);
	
	return 0;
}

