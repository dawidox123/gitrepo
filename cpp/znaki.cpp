/*
 * znaki.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;

woid liczznaki(char tab[], int roz) {
    int spacje = 0;
    int interpunkcja = 0;
    for (int i=0; i<roz; i++) {
		if (tab[i] == '.'   tab[i] == ',')
		interpunkcja++;
		}
    }

int zlicz(char tab[]) {
    int i = 0;
    int ile = 0;
    while (tab[i] != '\0') {
      ile++;
      i++;      
    } 
    return i;
}

void drukuj(char tab[], int rozmiar){
    for (int i= 0; i < rozmiar; i++) {
        cout << tab[i]<< " ";
    }
}


int main(int argc, char **argv)
{const int rozmiar = 20;
    char tab[rozmiar];
    cout << "jak sie nazywasz" << endl;
    //cin >> tab;
    cin.getline(tab, rozmiar);
    cout << tab;
    drukuj(tab, zlicz(tab));
    
    
	
	return 0;
}

