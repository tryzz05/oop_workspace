#include <iostream>
extern int max_element(int array[], int n);

int main() {
    int array[] = {5, 3, 7, 1, 9, 2};
    int n = sizeof(array) / sizeof(array[0]);
    
    int maxValue = max_element(array, n);
    std::cout << "The maximum element in the array is: " << maxValue << std::endl;
    
    return 0;
}