/*
 * minmax.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

void wypelnij(int tab[], int rozmiar){
    cout << "wprowadz liczby: " << rozmiar << endl;
    for (int i= 0; i < rozmiar; i++) {
        cin >> tab[i];
    }
}

void drukuj(int tab[], int rozmiar){
    for (int i= 0; i < rozmiar; i++) {
        cout << tab[i]<< " ";
    }
}

void minmax(int tab[], int rozmiar){
    int minimum = tab[0];
    int maksimum = tab[0];
    for (int i= 0; i < rozmiar; i++) {
        if (minimum > tab[i]) 
            minimum = tab[i];
        if (maksimum < tab[i]) 
            maksimum = tab[i];
        
    }
     cout << "maks:" << maksimum << endl;
     cout << "min:" << minimum << endl;
}



int main(int argc, char **argv)
{
    int rozmiar = 5;
	int tab[rozmiar];
    wypelnij(tab, rozmiar);
    drukuj (tab, rozmiar);
    cout << endl;
    minmax(tab, rozmiar);
	return 0;
}

