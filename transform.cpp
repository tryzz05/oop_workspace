#include <iostream>
#include <string>

using namespace std;

string convertToBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary representation: " << convertToBinary(num) << endl;
    return 0;
}
