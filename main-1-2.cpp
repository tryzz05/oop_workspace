#include <iostream>
void modifyArray(double* array, int size, double value);

int main() {
    double matrix[] = {1.0,2.1,3.2,4.3,5.4};
    double *p= &matrix[0];

    int num = sizeof(matrix)/sizeof(matrix[0]);

    double additionVal = 0.5;

    modifyArray(p, num, additionVal);

    return 0;
}