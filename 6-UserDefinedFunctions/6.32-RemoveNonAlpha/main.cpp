#include <iostream>

using namespace std;

string RemoveNonAlpha(string s);

int main() {
    string str {};
    getline(cin, str);
    cout << RemoveNonAlpha(str) << endl;
    return 0;
}

string RemoveNonAlpha(string s) {
    string stripped;
    for (unsigned int i = 0; i < s.length(); i++) {
        if (isalpha(s.at(i))) {
            stripped += s.at(i);
        }
    }
    return stripped;
}