/*
 * potega.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;


int potega_it(int a, int n) {
    int wynik = 1;
    for (int i = 1; i <= n; i++) {
        wynik = wynik *a;

        }
        return wynik;
    }

int potega_re(int a, int n) {
    if (n == 0) return 1;
    return potega_re(a, n-1) * a;
    }

int main(int argc, char **argv)
{
    int a, n;
    cout << "Podaj podstawei wykladnik: ";
    cin >> a >> n;
     potega_it(a, n); 
      potega_re(a, n); 
    cout << "potega: " << potega_it(a, n) << endl;
    cout << "potega: " << potega_re(a, n) << endl;
	
	return 0;
}

