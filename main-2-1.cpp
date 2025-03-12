#include <iostream>
extern int min_element(int array[], int n);

int main() {
  int array[] = {5, 3, 7, 1, 9, 2};
  int n = sizeof(array) / sizeof(array[0]);

  int minValue = min_element(array, n);
  std::cout << "The minimum element in the array is: " << minValue << std::endl;

  return 0;
}