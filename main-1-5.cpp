#include <iostream>
extern int count_evens(int number);

int main() {
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  int even_count = count_evens(number);
  std::cout << "The amount of even numbers between 1 and " << number
            << " is: " << even_count << std::endl;

  return 0;
}