#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    int numberPeople;
    cout << "Enter number of people: ";
    cin >> numberPeople;

    PersonList firstList;
    firstList.numPeople = numberPeople;
    firstList.people = new Person[numberPeople];
    for (int i = 0; i < numberPeople; ++i) {
        firstList.people[i] = {"Joannah Doe", 4};
    }
    PersonList shallowCopy = shallowCopyPersonList(firstList);

    for (int i = 0; i < numberPeople; ++i) {
    cout << "Person " << i + 1 << ": " << shallowCopy.people[i].name << ", " << shallowCopy.people[i].age << endl;
    }

    delete[] shallowCopy.people;

    return 0;
}