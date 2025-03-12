#include <iostream>
extern int sum_two_arrays(int array1[], int array2[], int n);

int main() {
  int array1[] = {1, 2, 3, 4, 5};
  int array2[] = {6, 7, 8, 9, 10};
  int n = sizeof(array1) / sizeof(array1[0]);

  int total_sum = sum_two_arrays(array1, array2, n);
  std::cout << "The sum of the two arrays is: " << total_sum << std::endl;

  return 0;
}