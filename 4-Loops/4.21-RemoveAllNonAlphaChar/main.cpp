/*
    Write a program that removes all non alpha characters from the given input.

    Ex: If the input is:

    -Hello, 1 world$!
    the output is:

    Helloworld
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string password {};
    getline(cin, password);
    string result {};

    for (unsigned int i {0}; i < password.length(); i++) {
        if (isalpha(password.at(i))) {
            result.push_back(password.at(i));
        }
    }        


    cout << result << endl;
    
    return 0;
}