#include <iostream>
bool is_ascending(int array[], int n);

int main() {
  int array1[] = {1, 2, 3, 4, 5};
  int array2[] = {5, 3, 4, 2, 1};

  int n1 = sizeof(array1) / sizeof(array1[0]);
  int n2 = sizeof(array2) / sizeof(array2[0]);

  if (is_ascending(array1, n1)) {
    std::cout << "Array 1 is ascending" << std::endl;
  } else {
    std::cout << "Array 1 is not ascending" << std::endl;
  }

  if (is_ascending(array2, n2)) {
    std::cout << "Array 2 is ascending" << std::endl;
  } else {
    std::cout << "Array 2 is not ascending" << std::endl;
  }

  return 0;
}