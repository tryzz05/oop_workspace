#include <iostream>
int sum_if_palindrome(int integers[], int length);

int main()
{
    int matrix[] = {};
    int num_values = sizeof(matrix) / sizeof(matrix[0]);

    std::cout << sum_if_palindrome(matrix, num_values) << std::endl;

    return 0;
}