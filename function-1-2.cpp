int is_identity(int array[10][10])
{
    int valid_row = 0;
    for (int i = 0; i < 10; ++i)
    {
        if (array[i][i] == 1)  // Diagonal contains values of 1
        {
            int row_value = 0;
            for (int j = 0; j < 10; ++j)
            {
                row_value += array[i][j]; // Sums the values in the row
            }
            if (row_value != 1) // Checking if the row equals 1
            {
            return 0; // Not identity matrix
            }
            else
            ++valid_row;
        }
    }
if (valid_row == 10) {
    return 1; // Identity matrix
}
else
return 0;
}