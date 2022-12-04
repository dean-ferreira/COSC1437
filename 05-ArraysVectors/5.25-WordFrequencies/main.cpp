/*
Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow. Assume that the list will always contain fewer than 20 words.

Ex: If the input is:

5 hey hi Mark hi mark
the program will output:

hey - 1
hi - 2
Mark - 1
hi - 2
mark - 1
Hint: Use two arrays, one array for the strings and one array for the frequencies.
*/

#include <iostream>
#include <string>
#include <vector>

int main() {
    int numWords {};
    std::cin >> numWords;

    std::vector<std::string> words;
    std::vector<int> freq;

    std::string newString {};
    for (int i = 0; i < numWords; i++) {
        std::cin >> newString;
        words.push_back(newString);
        freq.push_back(0);
    }

    for (int i = 0; i < numWords; i++) {
        for (int j = 0; j < numWords; j++) {
            if (words.at(i) == words.at(j)) {
                freq.at(i) = freq.at(i) + 1;
            }
        }
    }

    for (int i = 0; i < numWords; i++) {
        std::cout << words.at(i) << " - " << freq.at(i) << std::endl;
    }
    
    return 0;
}