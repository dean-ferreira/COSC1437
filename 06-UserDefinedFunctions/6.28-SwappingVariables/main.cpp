/*
Define a function named SwapValues that takes four integers as parameters and swaps the first with the second, and the third with the fourth values. Then write a main program that reads four integers from input, calls function SwapValues() to swap the values, and prints the swapped values on a single line separated with spaces.

Ex: If the input is:

3 8 2 4
function SwapValues() returns and the main program outputs:

8 3 4 2
The program must define and call a function:
void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4)
Function SwapValues() swaps the values referenced by the parameters.
*/

#include <iostream>

using namespace std;

void SwapValues(int &a, int &b, int &c, int &d);

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    SwapValues(a, b, c, d);
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}

void SwapValues(int &a, int &b, int &c, int &d) {
    a = a + b;
    b = a - b;
    a = a - b;

    c = c + d;
    d = c - d;
    c = c - d;
}