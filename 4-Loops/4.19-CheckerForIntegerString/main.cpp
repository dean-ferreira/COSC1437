/*
    Forms often allow a user to enter an integer. Write a program that takes in a string representing an integer as input, and outputs Yes if every character is a digit 0-9.

    Ex: If the input is:

    1995
    the output is:

    Yes
    Ex: If the input is:

    42,000
    or

    1995!
    the output is:

    No
    Hint: Use a loop and the isdigit() function (don't forget to include the cctype library).
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string userString {};
    cin >> userString;
    bool allDigit = true;

    for (auto c: userString) {
        if (!isdigit(c)) {
            allDigit = false;
        }
    }

    if (allDigit) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}