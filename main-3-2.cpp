#include <iostream>
int median_array(int array[], int n);

int main() {
    int arr1[] = {3, 5, 2, 1, 4};
    int arr2[] = {7, 2, 1, 6, 5, 3}; // Even length
    int arr3[] = {9}; // Single element
    int arr4[] = {}; // Empty array

    std::cout << "Median of Array 1: " << median_array(arr1, 5) << "\n"; // 3
    std::cout << "Median of Array 2: " << median_array(arr2, 6) << "\n"; // 0 (even length)
    std::cout << "Median of Array 3: " << median_array(arr3, 1) << "\n"; // 9
    std::cout << "Median of Array 4: " << median_array(arr4, 0) << "\n"; // 0 (invalid size)

    return 0;
}