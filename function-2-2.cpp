#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int integer = 0;
    for (int i=number_of_digits; i > 0; --i) {
        integer += binary_digits[i-1] * pow(2, number_of_digits-i);
    }
    return integer;

}