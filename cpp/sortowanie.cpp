/*
 * sortowanie.cpp
 * 
 * 
 * 
 */


#include <iostream>
#include <cstdlib>
using namespace std;

  
void wypelnij(int tab[], int rozmiar){
    srand(time(NULL));
    for (int i= 0; i < rozmiar; i++) {
        tab[i]=rand() % 101;
        //cin >> tab[i];
    }
}

void drukuj(int tab[], int rozmiar){
    for (int i= 0; i < rozmiar; i++) {
        cout << tab[i]<< " ";
    }
}

void zamien1(int a, int b) {
    cout << a << " " << b << endl;
    a=b;
    b=a;
    cout << a << " " << b << endl;
    }

void sort_buble(int tab[], int n) {
    for (int j = n-1;j > 0;j--) {
        cout << j <<" ";
        for (int i = 0;i<j;i++) {
            if (tab[i] > tab[i+1])
                
            }
        }
    }
    
    

int main(int argc, char **argv)
{
    int roz = 20;
    int tab[roz];
    wypelnij(tab, roz);
    cout << endl;
    drukuj(tab, roz);
    sort_buble(tab, roz)
    zamien1(5, 10);
  
	return 0;
}

