#include <iostream>
int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int number[] = {1,0,0,1,1};
    int length = sizeof(number)/sizeof(number[0]);

    std::cout << binary_to_int(number, length) << std::endl;

    return 0;
}