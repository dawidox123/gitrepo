/*
 * wyszukaj.cpp
 * 
 * 
 * 
 */


#include <iostream>

  
void wypelnij(int tab[], int rozmiar){
    srand(time(NULL));
    for (int i= 0; i < rozmiar; i++) {
        tab[i]=rand() % 10000;
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
        return -1;
    }
}

int wyszukaj_bin(int tab[], int roz, int szuk){
    
    }

int main(int argc, char **argv)
{
    int roz = 41;
    int tab[roz];
    wypelnik(tab, roz);
    drukuj(tab, roz);
    int szuk = 0;
    cout << "Podaj szukany element: ";
    cin >> szuk;
    if (szukaj_lin(tab, roz, szuk))
        cout << "znaleziono";
    else
        cout << "nie znaleziono";
	
	return 0;
}



