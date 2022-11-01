/*
Write a program that reads a list of integers, and outputs those integers in reverse. The input begins with an integer indicating the number of integers that follow. For coding simplicity, follow each output integer by a comma, including the last one. Also, you can assume the arrays have up to 10 elements.

Ex: If the input is:

5 2 4 6 8 10
the program will output

10,8,6,4,2,
Hint: Create an integer array with 100 elements to store the user input number.
*/

#include <iostream>

using namespace std;

int main() {
    int arraySize {};
    cin >> arraySize;
    int userArray [arraySize];

    for (int i = arraySize - 1; i >= 0; i--) {
        cin >> userArray[i];
    }

    for (int i = 0; i < arraySize; i++) {
        cout << userArray[i] << ",";
    }
    return 0;
}