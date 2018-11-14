/*
 * znaki.cpp
 * 
 * 
 */

#include <string.h>
#include <iostream>
using namespace std;




int main(int argc, char **argv) 
{   
    const int rozmiar = 20;
    char wyraz[20];
    cout << "podaj wyraz lub zdanie";
    cin.getline(wyraz, rozmiar);
    cout << cin.gcount() << endl;
    cout << strlen(wyraz) << endl;
   
    
    return 0;
}

