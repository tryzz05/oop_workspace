#include <iostream>

void print_scaled(int array[3][3], int scale)
{
    int scaled_array[3][3] = {0}; // creates array containing all 0's

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scaled_array[i][j] = scale * array[i][j]; // multiplies array
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << scaled_array[i][j] << " "; // prints scaled array
        }
        std::cout << std::endl;
    }
}