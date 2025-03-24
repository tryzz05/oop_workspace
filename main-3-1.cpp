#include <iostream>
#include "function-3-1.h"

int main() {
    int *matrix1 = readNumbers();
    int *matrix2 = readNumbers();

    if (equalsArray(matrix1, matrix2, 10) == 1) {
        std::cout << "true" << std::endl;
    }
    else
    std::cout << "false" << std::endl;

    delete matrix1;
    delete matrix2;

    return 0;
}