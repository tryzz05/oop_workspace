#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    int numberPeople;
    cout << "Enter number of people: ";
    cin >> numberPeople;

    Person* people = createPersonArray(numberPeople);

    for (int i = 0; i < numberPeople; ++i) {
        cout << "Person " << (i + 1) << ": " << people[i].name << ", " << people[i].age << endl;
    }

    delete[] people;

    return 0;
}