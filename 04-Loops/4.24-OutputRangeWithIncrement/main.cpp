/*

Write a program whose input is two integers,
and whose output is the first integer and subsequent increments of 5
as long as the value is less than or equal to the second integer.

Ex: If the input is:

-15 10
the output is:

-15 -10 -5 0 5 10
Ex: If the second integer is less than the first as in:

20 5
the output is:

Second integer can't be less than the first.
For coding simplicity, output a space after every integer, including the last.

*/

#include <iostream>

using namespace std;

int main() {
    int x {};
    int y {};
    int increment = 5;
    cin >> x >> y;

    if (x > y) {
        cout << "Second integer can't be less than the first." << endl;
    }
    else {
        while (x <= y) {
            cout << x << " ";
            x += increment;
        }
        cout << endl;
    }
    return 0;
}