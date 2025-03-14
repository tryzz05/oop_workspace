#include <iostream>

void print_binary_str(std::string decimal_number)
{
    int integer = std::stoi(decimal_number, nullptr, 10);
        std::string binary = "";
        if (integer == 0) {
            std::cout << "0" << std::endl;
        }
    while (integer > 0)
    {
        binary = std::to_string(integer % 2) + binary;
        integer /= 2;
    }
    std::cout << binary << std::endl;
}
