/*
    Write a program that takes a string and an integer as input, and outputs a sentence using the input values as shown in the example below.
    The program repeats until the input string is quit and disregards the integer input that follows.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string userString {};
    int userInt {};
    cin >> userString >> userInt;

    do {
        cout << "Eating " << userInt << " " << userString << " a day keeps you happy and healthy." << endl;
        cin >> userString >> userInt;
    }
    while (userString != "quit");

    return 0;
}