#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList shallowList;
    shallowList.numPeople = pl.numPeople;
    shallowList.people = pl.people;

    return shallowList;
}