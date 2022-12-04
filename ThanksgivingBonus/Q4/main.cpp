/*
The file yawl.txt contains a large number of words. If you consider the letters that those words start with, the letter X is the fewest with only 304 words. 

What is the most common starting letter for words in this file?
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

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
        wordBank.push_back(line);
        getline(input, line);
    }
    input.close();

    vector<int> alphabetStats (26);
    int xCount = 0;
    for (size_t i = 0; i < wordBank.size(); i++) {
        if (wordBank.at(i).at(0) == 'A') {
            alphabetStats.at(0)++;
        }
        else if (wordBank.at(i).at(0) == 'B') {
            alphabetStats.at(1)++;
        }
        else if (wordBank.at(i).at(0) == 'C') {
            alphabetStats.at(2)++;
        }
        else if (wordBank.at(i).at(0) == 'D') {
            alphabetStats.at(3)++;
        }
        else if (wordBank.at(i).at(0) == 'E') {
            alphabetStats.at(4)++;
        } 
        else if (wordBank.at(i).at(0) == 'F') {
            alphabetStats.at(5)++;
        }
        else if (wordBank.at(i).at(0) == 'G') {
            alphabetStats.at(6)++;
        }
        else if (wordBank.at(i).at(0) == 'H') {
            alphabetStats.at(7)++;
        }
        else if (wordBank.at(i).at(0) == 'I') {
            alphabetStats.at(8)++;
        } 
        else if (wordBank.at(i).at(0) == 'J') {
            alphabetStats.at(9)++;
        }
        else if (wordBank.at(i).at(0) == 'K') {
            alphabetStats.at(10)++;
        }
        else if (wordBank.at(i).at(0) == 'L') {
            alphabetStats.at(11)++;
        }
        else if (wordBank.at(i).at(0) == 'M') {
            alphabetStats.at(12)++;
        }
        else if (wordBank.at(i).at(0) == 'N') {
            alphabetStats.at(13)++;
        }
        else if (wordBank.at(i).at(0) == 'O') {
            alphabetStats.at(14)++;
        } 
        else if (wordBank.at(i).at(0) == 'P') {
            alphabetStats.at(15)++;
        }
        else if (wordBank.at(i).at(0) == 'Q') {
            alphabetStats.at(16)++;
        }
        else if (wordBank.at(i).at(0) == 'R') {
            alphabetStats.at(17)++;
        }
        else if (wordBank.at(i).at(0) == 'S') {
            alphabetStats.at(18)++;
        } 
        else if (wordBank.at(i).at(0) == 'T') {
            alphabetStats.at(19)++;
        }
        else if (wordBank.at(i).at(0) == 'U') {
            alphabetStats.at(20)++;
        }
        else if (wordBank.at(i).at(0) == 'V') {
            alphabetStats.at(21)++;
        }
        else if (wordBank.at(i).at(0) == 'W') {
            alphabetStats.at(22)++;
        }
        else if (wordBank.at(i).at(0) == 'X') {
            alphabetStats.at(23)++;
        } 
        else if (wordBank.at(i).at(0) == 'Y') {
            alphabetStats.at(24)++;
        }
        else if (wordBank.at(i).at(0) == 'Z') {
            alphabetStats.at(25)++;
        } 
    }

    char letter = 'A';
    int max = 0;
    char maxLetter = 'A';

    for (size_t i = 0; i < alphabetStats.size(); i++) {
        if (alphabetStats.at(i) > max) {
            max = alphabetStats.at(i);
            maxLetter = letter;
        }
        cout << letter << " " << alphabetStats.at(i) << endl;
        letter++;
    }

    cout << "Letter: " << maxLetter << " Count: " << max << endl;
    return 0;
}