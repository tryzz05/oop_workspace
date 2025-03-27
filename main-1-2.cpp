#include <iostream>
#include "Person.h"
#include "function-1-2.h"
using namespace std;

int main() {
    int numberPeople;
    cout << "Enter number of people: ";
    cin >> numberPeople;

    PersonList list = createPersonList(numberPeople);

    delete[] list.people;

    return 0;
}