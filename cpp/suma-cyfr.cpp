/*
 * suma-cyfr.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int a = 0;
    while (a < 10) {
        cout << "podaj liczbę ";
        cin >> a;
    };
    int suma = 0;
    while (a > 0) {
        suma = suma + (a % 10);
        a = a / 10;
    };
    cout << "suma " << suma;
    
	return 0;
}

