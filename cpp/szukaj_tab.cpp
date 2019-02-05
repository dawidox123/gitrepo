/*
 * szukaj_tab.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

int szukaj(int tab[], int x, int n) {
for (int i = 0;i<n;i++) {
    if (tab[i]==x) return i;
    }
return -1;
}

int main(int argc, char **argv)
{
    int x;
    cout << "podaj: ";
     
    cin >> x;
    int n = 10;;
	int tab[n]={1, 2, 3, 12, 23, 6, 5,78 ,123, 45};
    szukaj(tab, x, n);
    return 0;
}

