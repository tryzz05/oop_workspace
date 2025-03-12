#include <iostream>
double weighted_average(int array[], int n);

int main() {
    int arr1[] = {1, 2, 1, 4, 1, 3};
    int arr2[] = {5, 5, 5, 5, 5}; // All elements same
    int arr3[] = {10}; // Single element
    int arr4[] = {}; // Empty array

    std::cout << "Weighted average of arr1: " << weighted_average(arr1, 6) << "\n"; // 3.0
    std::cout << "Weighted average of arr2: " << weighted_average(arr2, 5) << "\n"; // 5.0
    std::cout << "Weighted average of arr3: " << weighted_average(arr3, 1) << "\n"; // 10.0
    std::cout << "Weighted average of arr4: " << weighted_average(arr4, 0) << "\n"; // 0.0

    return 0;
}