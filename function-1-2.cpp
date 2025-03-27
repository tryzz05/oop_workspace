#include <iostream>
#include "Person.h"
#include "function-1-2.h"

Person *createPersonArray(int n)
{
    Person *arrayPerson = new Person[n];
    for (int i = 0; i < n; ++i)
    {
        (arrayPerson + i)->name = "Jane Doe";
        (arrayPerson + i)->age = 1;
    }

    return arrayPerson;
}

PersonList createPersonList(int n)
{
    PersonList arrayList;
    Person* personArray = createPersonArray(n);
    arrayList.people = personArray;
    arrayList.numPeople = n;

    return arrayList;
}
