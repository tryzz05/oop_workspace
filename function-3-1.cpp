#include <iostream>
#include "function-3-1.h"
using namespace std;

int *readNumbers() {
    int* matrix = new int[10];
    
    for (int i =0; i<10; ++i) {
        cin >> *(matrix+i);
    }

    return matrix;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    for (int i = 0; i < length; ++i) {
        if (*(numbers1 + i) != *(numbers2 + i)) {
            return false;
        }
    }
    return true;
}