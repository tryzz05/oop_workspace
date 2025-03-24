#include <iostream>
#include "function-2-1.h"

int main() {
    int *matrix = readNumbers();
    hexDigits(matrix, 10);

    delete matrix;

    return 0;
}