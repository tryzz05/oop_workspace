#include <iostream>
using namespace std;

int *readNumbers() {
    int* matrix = new int[10];
    
    for (int i =0; i<10; ++i) {
        cin >> *(matrix+i);
    }

    return matrix;
}

void printNumbers(int *numbers,int length) {

    for (int i =0; i<10; ++i) {
        cout << i << " " << *(numbers+i) << endl;
    }
    delete numbers;
    return;
}