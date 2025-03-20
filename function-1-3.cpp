#include <iostream>

double* duplicateArray(double* array, int size) {
    double matrix[size];
    for (int i=0; i<size; ++i){
        matrix[i] = *(array+i);
    }

    double* p = &matrix[0];

    return p;

}