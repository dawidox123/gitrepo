/*
 * konwersje.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

int cyfry[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 65,66, 67, 68, 69, 70};


void dec2any(int l, int p) {
    int r[8];
    int i = 0;
    do{
       r[i] = l%p;
       l = l/p;
       i++; 
    }while(l != 0);
    
    for (i=i-1;i>=0;i--) {
        if (r[i]>10)
            cout << (char)cyfry[r[i]];
        else
            cout << r[i];
    }
}

void any2dec() {
    char l[9];
    int p = 0;
    cout << "p[2-16]";
    cin >> p;
    
    cout << "l";
    cin.getline(l,8);
    for int i = 0;i<9;i++) {
        cout << i;
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

