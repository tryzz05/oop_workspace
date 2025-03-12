#include <iostream>
bool is_fanarray(int array[], int n);

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {2, 4, 4, 2};
    int arr3[] = {1, 2, 1, 2, 1};
    int arr4[] = {1, 3, 5, 4, 2};

    std::cout << std::boolalpha; // Print true/false instead of 1/0
    std::cout << "Array 1: " << is_fanarray(arr1, 5) << "\n"; // true
    std::cout << "Array 2: " << is_fanarray(arr2, 4) << "\n"; // true
    std::cout << "Array 3: " << is_fanarray(arr3, 5) << "\n"; // false
    std::cout << "Array 4: " << is_fanarray(arr4, 5) << "\n"; // false

    return 0;
}