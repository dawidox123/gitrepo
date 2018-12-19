/*
 * cwpetle.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

void cw01() {
    int suma = 0;
    int liczba;
    while (suma<=75) {
    cout << "podaj liczbe: ";
    cin >> liczba;
    suma = suma + liczba;
}
    cout << suma ;
    }
    
    void cw02() {
        int n;
        cout << "podaj pierwszą liczbe: ";
        cin >> n;
        //~while (n<1) {
            //~cout << "błąd";
            //~cout << "podaj pierwszą liczbe: ";
            //~}
            int m;
            cout << "podaj drugą liczbe : ";
            cin >> m;
            //~while (n<=m) {
                //~cout << "blad";
                //~cout <<  " podaj drugą liczbe";
                //~}
                for (int liczba=1;liczba<m+1;liczba++) {
                    cout << liczba << " ";
                    } 
        }
        
        void cw03() {
            int a;
            cout << "podaj liczbe: ";
            cin a;
            int wynik = 1;
            for (int i =0;i<=a;i++) {
                wynik = wynik * i;
                }
            }

int main(int argc, char **argv)
{
    cw02();
	
	return 0;
}

