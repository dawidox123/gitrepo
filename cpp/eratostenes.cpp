/*
 * eratostenes.cpp
 * 
 * 
 * 
 */

#include <cmath>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    bool tablica[101];
    int i = 0;
    int zakres = 0;
    for (i=2; i < 101; i++) {
        tablica[i] = true;
        }	
        cout << "Podaj górny zakres: ";
        cin >> zakres;
        float b = sqrt((float)zakres);
        for (i=2; i <= b; i++) {
            if (tablica[i] != false)
                for (j= i + i; j < zakres + 1; j = j + i)) {
                    tablica[j] = false;
                    }
        }
	return 0;
}

