/*
 * euklides.cpp
 * 
 */


#include <iostream>
using namespace std;

int nwd_klasyczne(int a, int b){
    while (a != b) {
        if (a > b) 
            a = a - b;
        else
            b = b - a;

    
    }
    return a;
}
int main(int argc, char **argv)
{
	int a;
    int b;
    a = b = 0;
    cout << "podaj dwie liczby: ";
    cin >> a >> b; 
    nwd_klasyczne(a, b);
	return 0;
}

