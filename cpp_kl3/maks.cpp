/*
 * maks.cpp
 * 
 * Copyright 2019  <>
 * 
 */


#include <iostream>
using namespace std;



void minmax(int tab[], int rozmiar){
    int minimum = tab[0];
    int maksimum = tab[0];
    for (int i= 0; i < rozmiar; i++) {
        if (minimum > tab[i]) 
            minimum = tab[i];
        if (maksimum < tab[i]) 
            maksimum = tab[i];
        
    }
     cout << "maks: " << maksimum << endl;
     cout << "min: " << minimum << endl;
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

