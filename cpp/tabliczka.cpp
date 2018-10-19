/*
 * tabliczka.cpp
 
 */


#include <iostream>

using namespace std;

void tabliczka(int x, int y) {
    for (int i = 1; i <= x; i++) {
         for (int j = 1; j <= x; j++) {
             cout << i * j << " ";
        }
    }
}

int main(int argc, char **argv)

{
	int m;
    m = 0;
    int n = 0;
    cout << "podaj pierwszą liczbę";
    cin >> m;
    cout << "podaj drugą liczbę";
    cin >> n;
    tabliczka(m, n);
	return 0;
}

