int sum_diagonal(int array[4][4])
{
    int sum = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum = sum + array[i][i]; // adds the value of diagonals together
    }
    return sum;
}