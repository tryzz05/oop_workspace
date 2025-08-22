#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    int numberPeople;
    cout << "Enter number of people: ";
    cin >> numberPeople;

    PersonList list = createPersonList(numberPeople);

    delete[] list.people;

    return 0;
}