#include <iostream>
int *readNumbers();
void hexDigits(int *numbers, int length);

int main() {
    hexDigits(readNumbers(), 10);
    return 0;
}