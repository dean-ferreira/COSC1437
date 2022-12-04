/*
A digram is a pair of successive letters. In the word "CART" for example, there are three digrams: CA, AR, and RT. Only the digram RT does not contain a vowel. The word list zingarelli2005.txt is a compiled list of Italian words.

The most common digram in this file of Italian words is ER, but it contains a vowel

What is the most common digram (pair of letters) in the file that does not contain a vowel?
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

map<string, int> digramCounts;

bool containsVowel(string digram) {
    for (int i = 0; i < digram.length(); i++) {
        switch(digram.at(i)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                return true;
        }
    }
    return false;
}

void composeDigrams(string word) {
    
    for (int i = 0; i < word.length() - 1; i++) {
        string digram {};
        digram += word.at(i);
        digram += word.at(i+1);
        if (!containsVowel(digram)) {
            if (digramCounts.find(digram) != digramCounts.end()) {
                digramCounts[digram]++;
            }
            else {
                digramCounts.insert(pair<string, int>(digram, 1));
            }
        }
    }
}

int main() {
    ifstream input;
    input.open("test.txt");
    if (!input.is_open()) {
        cout << "File does not exist." << endl;
        return 0;
    }

    vector<string> wordBank;
    string line{};
    getline(input, line);
    while (!input.fail()) {
        wordBank.push_back(line);
        getline(input, line);
    }
    input.close();

    // ZURLO
    for (size_t i = 0; i < wordBank.size(); i++) {
        composeDigrams(wordBank.at(i));
    }
    // composeDigrams("CART");
    map<string, int>::iterator itr;
    int max = 0;
    string mostCommonDigram {};
    for (itr = digramCounts.begin(); itr != digramCounts.end(); ++itr) {
        if (max < itr->second) {
            max = itr->second;
            mostCommonDigram = itr->first;
        }
    }
    cout << "Most common: " << mostCommonDigram << " Count: " << max << endl;
    return 0;
}