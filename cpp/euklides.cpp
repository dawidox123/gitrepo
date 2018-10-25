/*
 * euklides.cpp
 * 
 */


#include <iostream>
using namespace std;

int nwd_klasyczne(int a, int b) {
    int licznik = 0;
    while (a != b) {
        if (a > b) 
            a = a - b;
        else
            b = b - a;
        licznik++;

    
    }
    cout << "powtórzeń: " << licznik << endl;
    return a;
}

int nwd_optymalny(int a, int b){
    while (a > 0) {
        if (a > 0) {
        a = a % b;
        b = b - a;
    }
        else
        cout << b;
        }
        return b;
    }

int main(int argc, char **argv)
{
	int a;
    int b;
    a = b = 0;
    cout << "podaj dwie liczby: ";
    cin >> a >> b; 
    cout << "NWD(" << a << ", " << b << ") = "
        << nwd_klasyczne(a, b) << endl;
    cout << "NWD(" << a << ", " << b << ") = "
        << nwd_optymalny(a, b) << endl;
	return 0;
}

