/*
 * szyfr_przestawieniowy.cpp
 * 
 * 
 * 
 */


#include <iostream>
#include <string.h>
using namespace std;

#define MAKS 100

void szyfruj(char t[], int k) {
    int ilo = strlen(t);
    cout <<  ilo << endl;;
    int reszta;
    reszta = ilo & k;
    cout << reszta;
    
    }

int main(int argc, char **argv)
{
    char t[MAKS];
    int k = 0;
    cout << "podaj tekst: ";
    cin.getline(t, MAKS);
    cout << "podaj klucz: ";
    cin >> k;
    szyfruj(t, k);
    
	return 0;
}

