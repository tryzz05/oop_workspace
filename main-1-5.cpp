void print_summed(int array1[3][3], int array2[3][3]);

int main()
{
    int matrix1[3][3] = {
        {1, 2, 3},
        {2, 5, 3},
        {6, 2, 1}};

    int matrix2[3][3] = {
        {1, 6, 3},
        {5, 2, 0},
        {2, 6, 9}};

    print_summed(matrix1, matrix2);

    return 0;
}