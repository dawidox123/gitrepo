/*
 * litery.cpp
 * 
 */


#include <iostream>
using namespace std;

void liczznaki(char tab[], int roz) {
  
    int samogloski = 0; 
   
    for (int i = 0; i<roz; i++) {
		//~if (tab[i] == ' ' ) spacje++;
        //~else if(tab[i] == '.'|| tab[i] == ',')
        //~cout << tab[i] << " ";
		//~interpunkcja++;
        switch (tab[i]){
            case ' ':
            case '\t':
                spacje++;
            break;
            case '.':
            case ',':
                interpunkcja++;
            break;
            case '(':
            case ')':
                symbole++;
            break;
            default:
                reszta++;
                
        }
    }
    cout << "spacje: " << spacje << endl;
    cout << "interpunkcje: " << interpunkcja << endl;
    cout << "symbole: " << symbole << endl;
    cout << "reszta: " << reszta << endl;
}

int main(int argc, char **argv)
{
    int rozmiar = 10;
    char tab[rozmiar];
     cout << "podaj wyraz lub zdanie: ";
     cin.getline (tab, rozmiar);
     cout << tab;
     char 
	
	return 0;
}

