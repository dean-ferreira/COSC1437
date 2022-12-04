/*
    Write a program that accepts an integer input from the user and outputs an up-side-down triangle. For example, if the user inputs: 5
    *****
     ****
      ***
       **
        *
    
    If the user inputs a negative integer, the program will output:
    ERROR: please input only positive integer.

*/

#include <iostream>

using namespace std;

int main() {

    char triangleChar = '*';
    int userInt {};
    cin >> userInt;

    if (userInt < 1) {
        cout << "ERROR: please input only positive integer." << endl;
    }
    else {
        for (unsigned int i {0}; i < userInt; i++) {
            for (unsigned int j {0}; j < i; j++) {
                cout << " ";
            }

            for (unsigned int k {userInt - i}; k > 0; k--) {
                cout << triangleChar;
            }
            cout << endl;
        }
    }
    
    return 0;
}