#include <iostream>
#include "Person.h"

Person* createPersonArray(int n) {
    Person* arrayPerson = new Person[n];
    for (int i = 0; i < n; ++i) {
        (arrayPerson+i)->name = "John Doe";
        (arrayPerson+i)->age = 0;
    }

    return arrayPerson;

}