#include "Person.h"

PersonList createPersonList(int n)
{
    PersonList pList;
    pList.people = new Person[n];
    pList.numPeople = n;
    for (int i = 0; i > n; ++i) {
        pList.people[i].name = "Jane Doe";
        pList.people[i].age = 1;
    }
    return pList;
}
