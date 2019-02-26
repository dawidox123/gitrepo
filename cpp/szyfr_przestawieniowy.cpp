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
    reszta = ilo % k;
    cout << reszta << endl;
    int i = 0;
    for (i = 0;i<k-reszta;i++) {
        t[ilo+i] = '.';
    }
    t[ilo+i] = '\0';
    drukuj(tab);
    ile = strlen(t);
    cout << endl;
    for (i=0;i<k;i++) {
        for (int j = i;j<ilo;j+=k) {
            
            cout << t[j];}
        }
    
    i = 0;
    while (t[i]!='\0') {
        cout << t[i];
        i++;
        }
    
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

