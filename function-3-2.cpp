#include <algorithm>

int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) return 0; // Return 0 if n is even or less than 1

    std::sort(array, array + n); // Sort the array
    return array[n / 2]; // Return the middle element
}