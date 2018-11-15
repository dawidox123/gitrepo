/*
 * znaki.cpp
 * 
 * 
 */

#include <string.h>
#include <iostream>
using namespace std;

bool palindrom(char w[], int r) {
    bool czy_pal = true;
    for (int i = 0; i < r / 2; i++) {
        if (w[i] != w[r - 1 - i]){
            czy_pal = false;
            break;
        }
    }
    return czy_pal;
}

int main(int argc, char **argv) 
{   
    const int rozmiar = 20;
    char wyraz[20];
    cout << "podaj wyraz lub zdanie: ";
    cin.getline(wyraz, rozmiar);
    cout << cin.gcount() << endl;
    cout << strlen(wyraz) << endl;
    if (palindrom(wyraz, strlen(wyraz)))
        cout << "palindrom";
    else
        cout << "nie palindrom";
   
    
    return 0;
}

