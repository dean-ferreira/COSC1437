#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string CreateAcronym(string userPhrase);

int main() {
   string str {};
   getline(cin, str);
   cout << CreateAcronym(str) << endl;
   return 0;
}

string CreateAcronym(string userPhrase) {
    string acro {};
    for (unsigned int i = 0; i < userPhrase.length(); i++) {
        if (i == 0) {
            if (isupper(userPhrase.at(i))) {
                acro += userPhrase.at(i);
                acro += ".";
            }
        }
        else if (isspace(userPhrase.at(i))) {
            if (isupper(userPhrase.at(i + 1))) {
                acro += userPhrase.at(i + 1);
                acro += ".";
            }
        }
    }
    return acro;
}