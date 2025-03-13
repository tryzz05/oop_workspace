#include <iostream>

void print_summed(int array1[3][3],int array2[3][3]) {
    int summed_array[3][3] = {0};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; i < 3; ++i) {
            summed_array[i][j] = array1[i][j] + array2[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; i < 3; ++i) {
            std::cout << summed_array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}