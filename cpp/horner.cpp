/*
 * horner.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;

void drukujw(int stopien, float tbwsp[]) {
    int i = 0;
    for (i = 0; i < stopien; i++) {
        cout << tbwsp[i] << "x^" << stopien - i << " + ";
    } 
    cout << tbwsp[i] << endl;
}

float horner_it(float x, int stopien, float tbwsp[]) {
    // 2x^3 +3x^2 + 2x + 4
    // x (x (2x + 3) + 5) + 4
    float wynik = tbwsp[0];
    for (i = 1; i <= stopien; i++) {
        wynik = ;
    }
}


int main(int argc, char **argv)
{
    float x = 0;
    float *tbwsp;
    int stopien = 0;
    cout << "podaj stopień wielomianu: ";
    cin >> stopien;
    tbwsp = new float [stopien + 1];
    //cout << tbwsp;
	for (int i = 0; i <= stopien; i++) {
        cout << "Podaj wspolczynnik przypotedze " << stopien - i << ": ";
        cin >> tbwsp[i];
    }
    cout << "Podaj argument: ";
    cin >> x;
    drukujw(stopien, tbwsp);
    cout << horner_it(x, stopien, tbwsp) << endl;
	return 0;
}
