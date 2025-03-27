#include <iostream>
#include "Person.h"
#include "function-1-1.h"
using namespace std;

int main() {
    int numberPeople;
    cout << "Enter number of people: ";
    cin >> numberPeople;

    Person* people = createPersonArray(numberPeople);

    for (int i =0; i<numberPeople; ++i) {
        std::cout << "Person " << (i+1) << ": " << people[i].name << ", " << people[i].age << endl;
    }

    delete[] people;

    return 0;
}