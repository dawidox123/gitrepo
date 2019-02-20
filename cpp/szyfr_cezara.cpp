/*
 * szyfr_cezara.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

#define MAKS 100

void szyfruj(char t[], int k) {
    int kod=0; int i = 0;
   while (t[i] !='\0') {
       kod = (int) t[i];
       kod==k;
       cout << (char)kod;
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

