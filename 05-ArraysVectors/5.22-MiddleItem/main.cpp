/*
Given a sorted list of integers, output the middle integer in the list. A negative number indicates the end of the input (the negative number is not a part of the sorted list). Assume the number of integers is always odd.

Ex: If the input is:

2 3 4 8 11 -1
the program will output

Middle item: 4
The maximum number of inputs for any test case should not exceed 9. If exceeded, output "Too many numbers".
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int maxSize = 9;
    vector<int> userVect {};
    int userInput {};
    
    cin >> userInput;
    while (userInput >= 0) {
        userVect.push_back(userInput);
        cin >> userInput;
    }

    if (userVect.size() > 9) {
        cout << "Too many numbers" << endl;
    }
    else {
        cout << "Middle item: " << userVect.at(userVect.size() / 2) << endl;
    }

    return 0;
}