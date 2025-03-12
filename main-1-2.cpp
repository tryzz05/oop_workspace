#include <iostream>
extern double array_mean(int array[], int n);

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int n = sizeof(array) / sizeof(array[0]);

  double mean = array_mean(array, n);
  std::cout << "The average is: " << mean << std::endl;

  return 0;
}