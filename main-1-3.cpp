#include <iostream>
void count_digits(int array[4][4]);

int main()
{
    int matrix[4][4] = {
        {6, 3, 2, 1},
        {9, 6, 7, 5},
        {2, 4, 1, 2},
        {1, 0, 5, 8}};

    count_digits(matrix);

    return 0;
}
