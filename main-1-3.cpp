#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    int numberPeople;
    cout << "Enter number of people: ";
    cin >> numberPeople;

    PersonList topLayer;
    topLayer.numPeople = numberPeople;
    topLayer.people = new Person[numberPeople];
    for (int i = 0; i < numberPeople; ++i) {
        topLayer.people[i] = {"Jaxon Doe", 3};
    }

    PersonList deepList = deepCopyPersonList(topLayer);

    for (int i = 0; i < numberPeople; ++i) {
        cout << "Person " << (i+1) << ": " << deepList.people[i].name << ", " << deepList.people[i].age << endl;
    }

    delete[] topLayer.people;

    return 0;
}