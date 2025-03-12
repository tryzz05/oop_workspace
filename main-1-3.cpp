#include <iostream>
extern int num_count(int array[], int n, int number);

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(array) / sizeof(array[0]);
  int number = 3;

  int count = num_count(array, n, number);
  std::cout << "The number " << number << " appears " << count
            << " times in the array." << std::endl;

  return 0;
}