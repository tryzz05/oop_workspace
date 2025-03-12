#include <iostream>
void print_pass_fail(char grade);

int main() {
    print_pass_fail('A'); // Pass
    print_pass_fail('C'); // Pass
    print_pass_fail('E'); // Fail
    print_pass_fail('G'); // Nothing
    return 0;
}