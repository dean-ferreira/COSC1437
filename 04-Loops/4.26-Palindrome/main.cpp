/*
A palindrome is a word or a phrase that is the same when read both forward and backward.
Examples are: "bob," "sees," or "never odd or even" (ignoring spaces).
Write a program whose input is a word or phrase,
and that outputs whether the input is a palindrome.

Ex: If the input is:

bob
the output is:

palindrome: bob
Ex: If the input is:

bobby
the output is:

not a palindrome: bobby
Hint: Start by just handling single-word input, and submit for grading.
Once passing single-word test cases, extend the program to handle phrases.
If the input is a phrase, remove or ignore spaces.
*/

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    string userText {};
    string reversedUserText {};
    getline(cin, userText);
    string strippedUserText = userText;
    strippedUserText.erase(remove(strippedUserText.begin(), strippedUserText.end(), ' '), strippedUserText.end());

    for (unsigned int i = strippedUserText.size(); i > 0; i--) {
        reversedUserText.push_back(strippedUserText.at(i - 1));
    }

    if (strippedUserText == reversedUserText) {
        cout << "palindrome: " << userText << endl;
    }
    else {
        cout << "not a palindrome: " << userText << endl;
    }

    return 0;
}