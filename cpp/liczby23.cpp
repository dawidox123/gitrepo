/*
 * liczby23.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;

int liczby2() {
    int ile = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i != j){
                cout << i << j << " ";
                }
            }
        }
        return ile;
    }

int main(int argc, char **argv)
{cout << "liczby dwucyfrowe" << liczby2();
	
	return 0;
}

