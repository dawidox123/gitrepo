/*
 * wyszukaj.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;
  
void wypelnij(int tab[], int rozmiar){
    srand(time(NULL));
    for (int i= 0; i < rozmiar; i++) {
        tab[i]=rand() % 10;
        //cin >> tab[i];
    }
}

void drukuj(int tab[], int rozmiar){
    for (int i= 0; i < rozmiar; i++) {
        cout << tab[i]<< " ";
    }
    cout << endl << endl;
}



void sort_insert(int tab[], int n) {
    int i, k, el;
    for (i=1;i<n;i++) {
        el = tab[i];
        k = i-1;
        while (k>=0 && tab[k]>el) {
            tab[k+1]=tab[k];
            k--;
        }
        tab[k+1]=el;
    }    
}

int szukaj_lin(int tab[], int roz, int szuk) {
    for (int i = 0;i<roz;i++) {
        if (tab[i] == szuk)
            return i;
    }
    return -1;
}

int wyszukaj_bin_lin(int tab[], int roz, int szuk){
    int p, k, s;
    p = 0;
    k = roz - 1;
    while (p <= k) {
        s = (p+k)/2;
        if (tab[s] == szuk){
            p = s;
            break;
        } else if (szuk<tab[s]) k = s - 1;
        else p = s + 1;
    }
    return p;
}

int main(int argc, char **argv)
{
    int roz = 20;
    int tab[roz];
    wypelnij(tab, roz);
    drukuj(tab, roz);
    int szuk = 0;
    cout << "Podaj szukany element: ";
    cin >> szuk;
    //~if (szukaj_lin(tab, roz, szuk))
        //~cout << "znaleziono";
    //~else
        //~cout << "nie znaleziono";
	sort_insert(tab, roz);
    drukuj(tab, roz);
    int indeks=wyszukaj_bin_lin(tab, roz, szuk);
    cout << "element: " << indeks;
	return 0;
}



