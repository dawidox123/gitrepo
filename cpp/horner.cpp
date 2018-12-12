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
    float wynik = tbwsp[0];
    for (int i = 1; i <= stopien; i++) {
       wynik = wynik * x + tbwsp[i];
        
    }
    return wynik;
}
float horner_re(float x, int stopien, float tbwsp[]) {
    if (stopien == 0)
        return tbwsp[0];
    return horner_re(x, stopien - 1, tbwsp) * x + tbwsp[stopien];

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
    cout << horner_re(x, stopien, tbwsp) << endl;
	return 0;
}

