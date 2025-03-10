#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    int array1[5] = {4,5,6,7,8};
    int array2[8] = {5,7,2,10,88,47,22,13};
    int array3[6] = {6,2,1,9,3,6};

    std::cout << "The first number is: " << count(array1, 5) << std::endl;
    std::cout << "The second number is: " << count(array2, 8) << std::endl;
    std::cout << "The third number is: " << count(array3, 6) << std::endl;
    return 0;
}
