/*
Palindromes are words that are spelled the same forward and backwards, like radar.

Mirror words are pairs of words that are not palindromes themselves, but are mirrors of one another: one is the other spelled backwards. As an example, consider the words ETA and ATE. These two words are not palindromes themselves but are a pair where one is the other spelled backwards. This is one example of the 218 pairs of three-letter words that are mirrors of each other in yawl.txt.

How many total pairs of mirror words are there in yawl.txt?
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

string ReverseString(string& str);

int main() {
    ifstream input;
    input.open("yawl.txt");
    if (!input.is_open()) {
        cout << "File does not exist." << endl;
        return 0;
    }

    vector<string> wordBank;
    vector<string> mirroredWords;

    string line{};
    getline(input, line);
    while (!input.fail()) {
        // if (line.length() == 3) {
        //     wordBank.push_back(line);
        // }
        wordBank.push_back(line);
        getline(input, line);
    }
    input.close();

    for (size_t i = 0; i < wordBank.size() - 1; i++) {
        for (size_t j = i + 1; j < wordBank.size(); j++) {
            if (wordBank.at(i) == ReverseString(wordBank.at(j))) {
                mirroredWords.push_back(wordBank.at(i));
                cout << mirroredWords.size() << endl;
            }
        }
    }

    cout << "Mirrored words: " << mirroredWords.size() << endl;
}

string ReverseString(string& str) {
    string reversed {};
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed.push_back(str.at(i));
    }
    return reversed;
}