/*
Write a C++ program to accept and store user input of 10 real numbers. The program then finds and outputs the maximum number of the input numbers. The output maximum should have two decimal digits. For example, if the user enters the following numbers,

0 1 2 3 4 5 6 7 8 9
the program will then output

9.00
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int arraySize = 10;
    double userArray [arraySize];
    double maxValue {};

    for (int i = 0; i < arraySize; i++) {
        cin >> userArray[i];

        if (i == 0) {
            maxValue = userArray[i];
        }
        else {
            if (userArray[i] > maxValue) {
                maxValue = userArray[i];
            }
        }
    }

    cout << fixed << setprecision(2);
    cout << maxValue;

    return 0;
}