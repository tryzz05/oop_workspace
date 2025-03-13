// Given a matrix of integers, return the sum of the elements along the main diagonal (top left bottom right)

// Signature: int sum_diagonal(int array[4][4])

#include <iostream>
int sum_diagonal(int array[4][4]);

int main()
{
    int matrix[4][4] = {
        {2, 3, 4, 5},
        {8, 3, 1, 5},
        {6, 9, 5, 2},
        {9, 5, 3, 5}};

    std::cout << "The sum of the diagonal values is: " << sum_diagonal(matrix) << std::endl;
    return 0;
}