/*
 * sortowanie.cpp
 * 
 * 
 * 
 */


#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char **argv)
{
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
	return 0;
}

