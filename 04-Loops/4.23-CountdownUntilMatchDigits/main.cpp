/*
Write a program that takes in an integer in the range 11-100 as input.
The output is a countdown starting from the integer,
and stopping when both output digits are identical. Note: End with a newline.

Ex: If the input is:

93
the output is:

93 92 91 90 89 88
Ex: If the input is:

11
the output is:

11
Ex: If the input is:

9
or any value not between 11 and 100 (inclusive), the output is:

Input must be 11-100
For coding simplicity, follow each output number by a space, even the last one.

Use a while loop. Compare the digits;
do not write a large if-else for all possible same-digit numbers (11, 22, 33, …, 99),
as that approach would be cumbersome for larger ranges.
*/

#include <iostream>

using namespace std;

int main() {
    int userInput {};
    cin >> userInput;

    if (userInput >= 11 && userInput <= 100) {
        if (userInput % 11 == 0) {
            cout << userInput << " " << endl;
        }
        else {
            while (userInput % 11 != 0) {
                cout << userInput << " ";
                userInput -= 1;
            }
            cout << userInput << " " << endl;
        }
    }
    else {
        cout << "Input must be 11-100" << endl;
    }
    return 0;
}