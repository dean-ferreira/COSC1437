/*
Given a line of text as input,
output the number of characters excluding spaces, periods, exclamation points, or commas.

Ex: If the input is:

Listen, Mr. Jones, calm down.
the output is:

21
Note: Account for all characters that aren't:
spaces, periods, exclamation points, or commas (Ex: "r", "2", "?").
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string userText {};
    int count {0};
    getline(cin, userText);
    vector<char> rejectChars {' ', '.', '!', ','};

    for (unsigned int i = 0; i < userText.size(); i++) {
        count += 1;
        for (unsigned int j = 0; j < rejectChars.size(); j++) {
            if (userText.at(i) == rejectChars.at(j)) {
                count -= 1;
            }
        }
    }

    cout << count << endl;
    return 0;
}