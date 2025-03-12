#include <iostream>
double sum_even(double array[], int n);

int main() {
    double arr1[] = {1.5, 2.0, 3.5, 4.0, 5.5, 6.0}; // Even positions: 1.5, 3.5, 5.5 → sum = 10.5
    double arr2[] = {10.1, 20.2, 30.3, 40.4, 50.5}; // Even positions: 10.1, 30.3, 50.5 → sum = 90.9
    double arr3[] = {7.7}; // Single element at position 0 → sum = 7.7
    double arr4[] = {}; // Empty array → sum = 0.0

    std::cout << "Sum of even positions in arr1: " << sum_even(arr1, 6) << "\n"; // 10.5
    std::cout << "Sum of even positions in arr2: " << sum_even(arr2, 5) << "\n"; // 90.9
    std::cout << "Sum of even positions in arr3: " << sum_even(arr3, 1) << "\n"; // 7.7
    std::cout << "Sum of even positions in arr4: " << sum_even(arr4, 0) << "\n"; // 0.0

    return 0;
}