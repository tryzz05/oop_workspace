#include <iostream>
#include "function-1-1.h"

int main() {
    int *matrix = readNumbers();
    printNumbers(matrix, 10);

    delete matrix;

    return 0;
}