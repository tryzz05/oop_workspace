#include <iostream>
#include "function-2-1.h"
using namespace std;

int *readNumbers()
{
    int *matrix = new int[10];

    for (int i = 0; i < 10; ++i)
    {
        cin >> *(matrix + i);
    }

    return matrix;
}

void hexDigits(int *numbers, int length)
{

    for (int i = 0; i < 10; ++i)
    {
        cout << i << " " << *(numbers + i) << " ";
        if (*(numbers+i)>9) {
            switch (*(numbers+i)) {
                case 10:
                cout << "A" << endl;
                break;
                case 11:
                cout << "B" << endl;
                break;
                case 12:
                cout << "C" << endl;
                break;
                case 13:
                cout << "D" << endl;
                break;
                case 14:
                cout << "E" << endl;
                break;
                case 15:
                cout << "F" << endl;
                break;
            }
        }
        else
        cout << *(numbers + i) << endl;
    }
}