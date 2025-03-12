#include <iostream>
extern bool is_descending(int array[], int n);

int main() {
  int array1[] = {5, 4, 3, 2, 1};
  int array2[] = {5, 6, 4, 3, 2};

  int n1 = sizeof(array1) / sizeof(array1[0]);
  int n2 = sizeof(array2) / sizeof(array2[0]);

  if (is_descending(array1, n1)) {
    std::cout << "Array 1 is decending" << std::endl;
  } else {
    std::cout << "Array 1 is not decending" << std::endl;
  }

  if (is_descending(array2, n2)) {
    std::cout << "Array 2 is decending" << std::endl;
  } else {
    std::cout << "Array 2 is not decending" << std::endl;
  }

  return 0;
}