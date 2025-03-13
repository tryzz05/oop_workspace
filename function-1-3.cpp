#include <iostream>

void count_digits(int array[4][4])
{
    int count[10] = {0}; // creates vector count containing all 0's

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (array[i][j] >= 0 && array[i][j] <= 9) // if number is between 0-9 inclusive, continue
            {
                count[array[i][j]]++; // increases count of number value (when previous conditions met)
            }
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << i << ":" << count[i] << ";"; // prints numbers
    }
    std::cout << std::endl;
}