#include <iostream>
double arrayMin(double* array, int size);

int main() {
    double matrix[] = {2,5,3.76,4,5,6, 0.62};
    int num = sizeof(matrix)/sizeof(matrix[0]);

    double *p = &matrix[0];

    std::cout << "The minimum value in the array is: " << arrayMin(p, num) << std::endl;

    return 0;

}