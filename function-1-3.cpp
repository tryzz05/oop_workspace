#include <iostream>
#include "Person.h"
#include "function-1-3.h"

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

PersonList deepCopyPersonList(PersonList pl) {
    PersonList deepList;
    deepList.numPeople = pl.numPeople;
    deepList.people = new Person[pl.numPeople];

    for (int i = 0; i < pl.numPeople; ++i) {
        deepList.people[i].name = pl.people[i].name;
        deepList.people[i].age = pl.people[i].age;
    }

    return deepList;
}