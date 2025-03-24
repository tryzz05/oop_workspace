#include <iostream>
#include "function-3-2.h"

int main() {
    int *matrix = readNumbers();

    int *reversed = reverseArray(matrix, 10);

    if (equalsArray(matrix, reversed, 10) == 1) {
        std::cout << "true" << std::endl;
    }
    else
    std::cout << "false" << std::endl;

    delete matrix;
    delete reversed;

    return 0;
}