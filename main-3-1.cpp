#include <iostream>
bool is_fanarray(int array[], int n);

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {2, 4, 4, 2};
    int arr3[] = {1, 2, 1, 2, 1};
    int arr4[] = {1, 3, 5, 4, 2};

    std::cout << std::boolalpha; // Print true/false instead of 1/0
    std::cout << "arr1: " << is_fanarray(arr1, 5) << "\n"; // true
    std::cout << "arr2: " << is_fanarray(arr2, 4) << "\n"; // true
    std::cout << "arr3: " << is_fanarray(arr3, 5) << "\n"; // false
    std::cout << "arr4: " << is_fanarray(arr4, 5) << "\n"; // false

    return 0;
}