/*
 * nieparzyste.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int a=0;

   while (a<=0||a>99) {
    cout << "podaj liczbe: ";
    cin >> a;
    }
    for (int i = 2;i<100;i+=2) {
        if (a ==i){
            cout << "liczba parzysta";
            return 0;
        }
    }
    cout << "nieparzysta";
	return 0;
}

