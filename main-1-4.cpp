void print_scaled(int array[3][3],int scale);

int main() {

int multiplier = 5;

    int matrix[3][3] = {
        {0,3,6},
        {9,4,1},
        {4,4,8}
    };

    print_scaled(matrix, multiplier);

    return 0;
}