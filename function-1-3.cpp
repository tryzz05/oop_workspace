#include "Person.h"

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