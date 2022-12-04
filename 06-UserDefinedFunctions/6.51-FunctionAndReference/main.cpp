#include <iostream>
#include <string>
using namespace std;

void replace_nonalphnum_to_space(string &s) {
    string str {};
    for (unsigned int i = 0; i < s.length(); i++) {
        if (!isalnum(s.at(i))) {
            s.replace(i, 1, " ");
        }
    }
}

// DO NOT modify main()
int main() {
   string s = "1234567890!@#$%^&*() abcdefg hijklmn   ";
   replace_nonalphnum_to_space(s);
   std::cout << s;
}