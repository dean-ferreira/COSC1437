/*
    Many user-created passwords are simple and easy to guess.
    Write a program that takes a simple password and makes it stronger by replacing characters using the key below, and by appending "!" to the end of the input string.

    i becomes 1
    a becomes @
    m becomes M
    B becomes 8
    s becomes $
    Ex: If the input is:

    mypassword
    the output is:

    Myp@$$word!
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string password {};
    cin >> password;

    for (unsigned int i {0}; i < password.length(); i++) {
        if (password.at(i) == 'i') {
            password.at(i) = '1';
        }
        else if (password.at(i) == 'a') {
            password.at(i) = '@';
        }
        else if (password.at(i) == 'm') {
            password.at(i) = 'M';
        }
        else if (password.at(i) == 'B') {
            password.at(i) = '8';
        }
        else if (password.at(i) == 's') {
            password.at(i) = '$';
        }
    }
    password.append("!");

    cout << password << endl;
    
    return 0;
}