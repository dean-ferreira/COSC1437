/*
Write a program that takes in a line of text as input,
and outputs that line of text in reverse.
The program repeats, ending when the user enters "Done", "done", or "d" for the line of text.

Ex: If the input is:

Hello there
Hey
done
then the output is:

ereht olleH
yeH
*/

#include <iostream>

using namespace std;

int main() {
    string userString {};
    getline(cin, userString);

    while (userString != "Done" && userString != "done" && userString != "d") {
        for (unsigned int i = userString.size(); i > 0; i--) {
            cout << userString.at(i - 1);
        }
        cout << endl;
        getline(cin, userString);
    }
    
    return 0;
}