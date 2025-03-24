#include <iostream>
#include "function-1-1.h"
using namespace std;

int *readNumbers() {
    int* matrix = new int[10];
    
    for (int i =0; i<10; ++i) {
        cin >> *(matrix+i);
    }

    return matrix;
}

void printNumbers(int *numbers,int length) {
    if (length <=0) {
        return;
    }
    for (int i =0; i<10; ++i) {
        cout << i << " " << *(numbers+i) << endl;
    }
}