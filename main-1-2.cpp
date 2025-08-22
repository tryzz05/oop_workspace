#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    int numberPeople;
    cout << "Enter number of people: ";
    cin >> numberPeople;

    PersonList list = createPersonList(numberPeople);
    for (int i = 0; i < numberPeople; ++i)
    {
        cout << "Person " << (i + 1) << ": " << list.people[i].name << ", " << list.people[i].age << endl;
    }

    delete[] list.people;

    return 0;
}