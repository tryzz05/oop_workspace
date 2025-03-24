#include <iostream>
int *readNumbers();
void printNumbers(int *numbers,int length) ;

int main() {
    printNumbers(readNumbers(), 10);

}