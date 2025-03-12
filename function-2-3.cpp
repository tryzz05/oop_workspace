#include <iostream>

void two_five_nine(int array[], int n) {
  int count_two = 0;
  int count_five = 0;
  int count_nine = 0;

  if (n < 1) {
    std::cout << "2:" << count_two << ";5:" << count_five << ";9:" << count_nine
              << ";\n";
    return;
  }

  for (int i = 0; i < n; i++) {
    switch (array[i]) {
      case 2:
        count_two++;
        break;
      case 5:
        count_five++;
        break;
      case 9:
        count_nine++;
        break;
      default:
        break;
    }
  }

  std::cout << "2:" << count_two << ";5:" << count_five << ";9:" << count_nine
            << ";\n";
}