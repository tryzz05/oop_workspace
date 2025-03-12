#include <iostream>
void check_grade(char grade);

int main() {
    check_grade('A'); // Pass
    check_grade('C'); // Pass
    check_grade('E'); // Fail
    check_grade('G'); // Nothing
    return 0;
}