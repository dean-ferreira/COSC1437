/*
Write a function MaxMagnitude() with three integer parameters that returns the largest magnitude value. Use the function in the main program that takes three integer inputs and outputs the largest magnitude value.

Ex: If the inputs are:

5 7 9
function MaxMagnitude() returns and the main program outputs:

9
Ex: If the inputs are:

-17 -8 -2
function MaxMagnitude() returns and the main program outputs:

-17
Note: The function does not just return the largest value, which for -17 -8 -2 would be -2. Though not necessary, you may use the absolute-value built-in math function.

Your program must define and call a function:
int MaxMagnitude(int userVal1, int userVal2, int userVal3)
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int MaxMagnitude(int x, int y, int z);

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << MaxMagnitude(x, y, z) << endl;
    return 0;
}

int MaxMagnitude(int x, int y, int z) {
    if (abs(x) > abs(y) && abs(x) > abs(z)) {
        return x;
    }
    else if (abs(y) > abs(x) && abs(y) > abs(z)) {
        return y;
    }
    else if (abs(z) > abs(x) && abs(z) > abs(y)) {
        return z;
    }
    else {
        return x;
    }
}