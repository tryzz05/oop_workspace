#include <iostream>
int sum_min_max(int integers[], int length);

int main()
{
    int matrix[] = {1, 2, 3, 4, 5, -1, 6, 7, 8, 9};
    int num_values = sizeof(matrix) / sizeof(matrix[0]);

    std::cout << sum_min_max(matrix, num_values) << std::endl;
}