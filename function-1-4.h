#ifndef FUNCTION_1_2_H
#define FUNCTION_1_2_H

#include "Person.h"

Person* createPersonArray(int n);

PersonList createPersonList(int n);

PersonList deepCopyPersonList(PersonList pl);

PersonList shallowCopyPersonList(PersonList pl);

#endif