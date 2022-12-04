#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string inputString {};

    bool foundComma = false;
    while (!foundComma || inputString != "q") {
        cout << "Enter input string:" << endl;
        getline(cin, inputString);
        if (inputString == "q") {
            break;
        }
        for (unsigned int i = 0; i < inputString.length(); i++) {
            if (inputString.at(i) == ',') {
                foundComma = true;
            }
        }

        if (!foundComma) {
            cout << "Error: No comma in string." << endl;
            cout << endl;
        }
        else {
            string firstWord {};
            string secondWord {};
            for (unsigned int i = 0; i < inputString.length(); i++) {
                if (inputString.at(i) == ',') {
                    firstWord = inputString.substr(0, i);
                    secondWord = inputString.substr(i + 1, inputString.length() - 1);
                }
            }

            firstWord.erase(remove(firstWord.begin(), firstWord.end(), ' '), firstWord.end());
            secondWord.erase(remove(secondWord.begin(), secondWord.end(), ' '), secondWord.end());

            cout << "First word: " << firstWord << endl;
            cout << "Second word: " << secondWord << endl;
            cout << endl;
        }
    }
    return 0;
}