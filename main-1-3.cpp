#include <iostream>
double* duplicateArray(double* array, int size);

int main() {
    double matrix[] = {1.4,0.3,9.6,3.2,5.1};
    double *p = &matrix[0];

    int num = sizeof(matrix)/sizeof(matrix[0]);

    std::cout << duplicateArray(p, num) << std::endl; 
}