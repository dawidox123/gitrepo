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
        tab[i]=rand() % 10000;
        //cin >> tab[i];
    }
}

void drukuj(int tab[], int rozmiar){
    for (int i= 0; i < rozmiar; i++) {
        cout << tab[i]<< " ";
    }
    cout << endl << endl;
}

void zamien1(int &a, int &b) {
    int c = a;
    a=b;
    b=c;
    //cout << a << " " << b << endl;
    }

void zamien2(int tab[], int i) {
    int c = tab[i];
    tab[i]=tab[i+1];
    tab[i+1]=c;
    //cout << a << " " << b << endl;
    }

void sort_buble(int tab[], int n) {
    for (int j = n-1;j > 0;j--) {

        for (int i = 0;i<j;i++) {
            if (tab[i] > tab[i+1])
                //zamien1(tab[i], tab[i+1]);
                zamien2(tab, i);
            }
        }
    }
    
void sort_selection(int tab[], int n) {
    int i, j, k;
    for (i=0;i<n;i++) {
        k =i;
        for (j=i+1;j<n;j++) {
            if (tab[j]<tab[k])
            k=j;
            }
            zamien1(tab[i], tab[k]);
        }
    }

void sort_insert(int tab[], int n) {
    int i, k, el;
    for (i=1;i<n;i++) {
        el = tab[i];
        k = i-1;
        while (k>=0 && tab[k]>el) {
            tab[k+1]=tab[k];
            k--;
        }
        tab[k+1]=el;
    }    
}

int main(int argc, char **argv)
{
    int roz = 200;
    int tab[roz];
    int n;
    wypelnij(tab, roz);
    cout << endl;
    drukuj(tab, roz);
    sort_buble(tab, roz);
    //~sort_insert(tab, n);
    //~sort_selection(tab, n);
    drukuj(tab, roz);
    cout << endl;
    //int a = 5; int b = 10;
    //zamien1(a, b);
    //cout << a << " " << b << endl;
	return 0;
}

