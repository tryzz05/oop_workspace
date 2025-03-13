#include <iostream>

void print_summed(int array1[3][3], int array2[3][3])
{
    int summed_array[3][3] = {0}; // creates array containing all 0's

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            summed_array[i][j] = array1[i][j] + array2[i][j]; // adds array values together
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << summed_array[i][j] << " "; // prints summed array
        }
        std::cout << std::endl;
    }
}