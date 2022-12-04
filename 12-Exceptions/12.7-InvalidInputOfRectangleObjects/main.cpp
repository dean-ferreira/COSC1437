/*
Modify the program so that it prints "Invalid length.
Program terminated" when the user uses an invalid value for length, and "Invalid width.
Program terminated" when they use an invalid value for width.
*/

#include "rectangle.h"
#include <iostream>

using namespace std;

int main()
{
    try
    {
        Rectangle r(-2, 3);
        cout << "Area: " << r.getArea() << endl;
    }
    catch (InvalidSideException e)
    {
        if (e.getIsWidth()) {
            cout << "Invalid width. ";
        }
        else {
            cout << "Invalid length. ";
        }
        cout << "Program terminated" << endl;
        exit(-1);
    }

    return 0;
}