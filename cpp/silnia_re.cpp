/*
 * silnia_re.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

int silnia_re(int n) {
    if (n == 0)
    return 1;
    return silnia_re(n - 1) * n;
    
    }

int main(int argc, char **argv)
{
    int n;
    cout << "podaj liczbę: ";
    cin >> n;
    
    silnia_re(n);
    cout << silnia_re << endl;
	return 0;
}

