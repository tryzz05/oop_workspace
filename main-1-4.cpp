#include <iostream>
#include "Person.h"
#include "function-1-4.h"
using namespace std;

int main() {
    int numberPeople;
    cout << "Enter number of people: ";
    cin >> numberPeople;

    PersonList list = createPersonList(numberPeople);

    shallowCopyPersonList(list);

    delete[] list.people;

    return 0;
}