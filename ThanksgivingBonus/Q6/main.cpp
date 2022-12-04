/*
In word games, like Scrabble, players alternate spelling words with letter tiles. Each letter is assigned a point value and the total of these values is used to compute the score for a word.

For words of up to 3 letters in length, the highest possible score is 21 (for the words ZIZ and ZUZ).

Consider the words in the file yawl.txt, for words of up to 8 letters in length, what is the highest word score possible?

Hint: The point values for the various letters are given by:

points = {'A':1,'B':3,'C':3,'D':2,'E':1,'F':4,'G':2,'H':4,'I':1,'J':8,'K':5,'L':1,'M':3,'N':1,'O':1,'P':3,'Q':10,'R':1,'S':1,'T':1,'U':1,'V':4,'W':4,'X':8,'Y':4,'Z':10}
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

int ScrabbleScore(string str);
void BuildLetterValues();

map<char, int> letterValues;

int main() {
    ifstream input;
    input.open("yawl.txt");
    if (!input.is_open()) {
        cout << "File does not exist." << endl;
        return 0;
    }

    vector<string> wordBank;
    string line{};
    getline(input, line);
    while (!input.fail()) {
        if (line.length() <= 8) {
            wordBank.push_back(line);
        }
        getline(input, line);
    }
    input.close();

    map<string, int> wordValues;
    BuildLetterValues();

    for (size_t i = 0; i < wordBank.size(); i++) {
        wordValues.insert(pair<string, int>(wordBank.at(i), ScrabbleScore(wordBank.at(i))));
    }

    map<string, int>::iterator itr;
    int max = 0;
    for (itr = wordValues.begin(); itr != wordValues.end(); ++itr) {
        if (max < itr->second) {
            max = itr->second;
        }
    }
    cout << "max: " << max << endl;
    return 0;
}

int ScrabbleScore(string str) {
    int score = 0;
    for (int i = 0; i < str.length(); i++) {
        score += letterValues.find(str.at(i))->second;
    }
    return score;
}

void BuildLetterValues() {
    letterValues.insert(pair<char, int>('A', 1));
    letterValues.insert(pair<char, int>('B', 3));
    letterValues.insert(pair<char, int>('C', 3));
    letterValues.insert(pair<char, int>('D', 2));
    letterValues.insert(pair<char, int>('E', 1));
    letterValues.insert(pair<char, int>('F', 4));
    letterValues.insert(pair<char, int>('G', 2));
    letterValues.insert(pair<char, int>('H', 4));
    letterValues.insert(pair<char, int>('I', 1));
    letterValues.insert(pair<char, int>('J', 8));
    letterValues.insert(pair<char, int>('K', 5));
    letterValues.insert(pair<char, int>('L', 1));
    letterValues.insert(pair<char, int>('M', 3));
    letterValues.insert(pair<char, int>('N', 1));
    letterValues.insert(pair<char, int>('O', 1));
    letterValues.insert(pair<char, int>('P', 3));
    letterValues.insert(pair<char, int>('Q', 10));
    letterValues.insert(pair<char, int>('R', 1));
    letterValues.insert(pair<char, int>('S', 1));
    letterValues.insert(pair<char, int>('T', 1));
    letterValues.insert(pair<char, int>('U', 1));
    letterValues.insert(pair<char, int>('V', 4));
    letterValues.insert(pair<char, int>('W', 4));
    letterValues.insert(pair<char, int>('X', 8));
    letterValues.insert(pair<char, int>('Y', 4));
    letterValues.insert(pair<char, int>('Z', 10));
}