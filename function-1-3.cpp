#include <iostream>

double* duplicateArray(double* array, int size) {
    if (size <=0) {
        return nullptr;
    }

    double* matrix = new double[size];
    for (int i=0; i<size; ++i){
        matrix[i] = array[i];
    }

    return matrix;

}