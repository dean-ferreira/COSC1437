/*
Before the advent of smart phones, it was challenging to remember phone numbers. One mnemonic solution was to associate words with the phone number for easy retention. Telephone keypads still show letters on the keypad associated with the numbers.

In this assignment you will identify the word and word combinations associated with telephone numbers by using the word list contained in the file "yawl.txt". You will extract from this file and store all the three and four-letter words.

You will then accept, from user input, a phone number as a string. Then you will validate that the phone number is in the correct format and contains valid numbers. If the phone number is not valid, you should display the message "Invalid phone number" and exit.

Using the phone number, you will determine all the corresponding words and word combinations and write them into a file named "output.txt".

Note: A phone number must be in the format ###-#### and contain only the digits [2-9] inclusive to be considered valid. The digits 1 and 0 are considered invalid because they are not associated with any letters.

Example Input:

234-5678
The output.txt file should contain:

BEG-LOST
Example Input:

223-5653
The output.txt file should contain:

ACE-JOKE
ACE-JOLE
ACE-LOKE
BAD-JOKE
BAD-JOLE
BAD-LOKE
CAD-JOKE
CAD-JOLE
CAD-LOKE
*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <regex>
#include <sstream>

using namespace std;

bool CreateWordBank(vector<string> &vect, string fileName);
bool ValidateInput(string input);
void AddLetters(vector<vector<string>> &vect, string x, string y, string z);
void AddLetters(vector<vector<string>> &vect, string x, string y, string z, string a);
void CreateThreeLetterWords(const vector<int> &keyPadNums, const vector<vector<string>> &letters, vector<string> &acceptedWords, const vector<string> &wordBank);
void CreateFourLetterWords(const vector<int> &keyPadNums, const vector<vector<string>> &letters, vector<string> &acceptedWords, const vector<string> &wordBank);
void FindPotentialWord(vector<string> &acceptedWords, const vector<string> &wordBank, string target);
void WriteOutput(const vector<string> &threeLetterWords, const vector<string> &fourLetterWords);

int main()
{
    vector<string> acceptedThreeLetterWords; // vector containing three letter words that exist in the input file
    vector<string> acceptedFourLetterWords; // vector containing four letter words that exist in the input file
    vector<string> wordBank; // vector containing all words found in the input file
    if (!CreateWordBank(wordBank, "yawl.txt"))
    {
        cout << "File not found." << endl;
        return 1;
    }

    string userInput{};
    cin >> userInput; // get phone number input from user

    if (!ValidateInput(userInput))
    {
        cout << "Invalid phone number" << endl;
        return 2;
    }

    vector<vector<string>> letters{2};  // 2D vector where the index represents the keypad number
    AddLetters(letters, "A", "B", "C"); // 2
    AddLetters(letters, "D", "E", "F"); // 3
    AddLetters(letters, "G", "H", "I"); // 4
    AddLetters(letters, "J", "K", "L"); // 5
    AddLetters(letters, "M", "N", "O"); // 6
    AddLetters(letters, "P", "Q", "R", "S"); // 7
    AddLetters(letters, "T", "U", "V"); // 8
    AddLetters(letters, "W", "X", "Y", "Z"); // 9

    vector<int> firstWordNums; // vector containing the keypad numbers pressed for the first word (three letter word)
    for (int i = 0; i < 3; i++)
    {
        firstWordNums.push_back(userInput[i] - '0'); // converts char to int
    }

    vector<int> secondWordNums; // vector containing the keypad numbers pressed for the second word (four letter word)
    for (int i = 4; i < 8; i++)
    {
        secondWordNums.push_back(userInput[i] - '0'); // converts char to int
    }

    CreateThreeLetterWords(firstWordNums, letters, acceptedThreeLetterWords, wordBank); // creates 3 letter words and adds them to the acceptedThreeLetterWords vector
    CreateFourLetterWords(secondWordNums, letters, acceptedFourLetterWords, wordBank); // creates 4 letter words and adds them to the acceptedFourLetterWords vector
    WriteOutput(acceptedThreeLetterWords, acceptedFourLetterWords); // writes result to the output file

    return 0;
}

// Opens, reads, and closes a file, adds words to an existing vector, returns true if there are no errors, otherwise returns false if file can't be opened
bool CreateWordBank(vector<string> &vect, string fileName)
{
    ifstream input;
    input.open(fileName);
    if (!input.is_open())
    {
        return false;
    }

    string line{};
    getline(input, line);
    while (!input.fail())
    {
        if (line.length() == 3 || line.length() == 4) // Only 3 and 4 letter words are accepted
        {
            vect.push_back(line);
        }
        getline(input, line);
    }
    input.close();

    return true;
}

// Returns true if input is in the form ###-#### and contains only digits [2-9], otherwise returns false
bool ValidateInput(string input)
{
    regex phoneNumberFormat("[[2-9][2-9][2-9]-[2-9][2-9][2-9][2-9]");
    if (!regex_match(input, phoneNumberFormat))
    {
        return false;
    }
    return true;
}

// Creates a vector of given letters and appends that vector to an existing 2D vector
void AddLetters(vector<vector<string>> &vect, string x, string y, string z)
{
    vector<string> tempVect;
    tempVect.push_back(x);
    tempVect.push_back(y);
    tempVect.push_back(z);
    vect.push_back(tempVect);
}

// Overloaded version that has an extra parameter for button with 4 letters
void AddLetters(vector<vector<string>> &vect, string x, string y, string z, string a)
{
    vector<string> tempVect;
    tempVect.push_back(x);
    tempVect.push_back(y);
    tempVect.push_back(z);
    tempVect.push_back(a);
    vect.push_back(tempVect);
}


// Creates every possible 3 letter word, adds word to the acceptedThreeLetterWords vector if that word is found in the input file
void CreateThreeLetterWords(const vector<int> &keyPadNums, const vector<vector<string>> &letters, vector<string> &acceptedWords, const vector<string> &wordBank)
{
    string potentialWord{};
    vector<int> numLetters(3); // each element represents the number of letters for the keypad pressed
    for (unsigned int i = 0; i < numLetters.size(); i++)
    {
        if (keyPadNums.at(i) == 7 || keyPadNums.at(i) == 9) // 7 and 9 have 4 letters
        {
            numLetters.at(i) = 4;
        }
        else
        {
            numLetters.at(i) = 3;
        }
    }
    for (int i = 0; i < numLetters.at(0); i++)
    {
        for (int j = 0; j < numLetters.at(1); j++)
        {
            for (int k = 0; k < numLetters.at(2); k++)
            {
                string potentialWord{};
                potentialWord.append(letters[keyPadNums.at(0)][i]);
                potentialWord.append(letters[keyPadNums.at(1)][j]);
                potentialWord.append(letters[keyPadNums.at(2)][k]);
                FindPotentialWord(acceptedWords, wordBank, potentialWord);
            }
        }
    }
}

// Creates every possible 4 letter word, adds word to the acceptedFourLetterWords vector if that word is found in the input file
void CreateFourLetterWords(const vector<int> &keyPadNums, const vector<vector<string>> &letters, vector<string> &acceptedWords, const vector<string> &wordBank)
{
    string potentialWord{};
    vector<int> numLetters(4); // each element represents the number of letters for the keypad pressed
    for (unsigned int i = 0; i < numLetters.size(); i++)
    {
        if (keyPadNums.at(i) == 7 || keyPadNums.at(i) == 9)
        {
            numLetters.at(i) = 4;
        }
        else
        {
            numLetters.at(i) = 3;
        }
    }
    for (int i = 0; i < numLetters.at(0); i++)
    {
        for (int j = 0; j < numLetters.at(1); j++)
        {
            for (int k = 0; k < numLetters.at(2); k++)
            {
                for (int l = 0; l < numLetters.at(3); l++)
                {
                    string potentialWord{};
                    potentialWord.append(letters[keyPadNums.at(0)][i]);
                    potentialWord.append(letters[keyPadNums.at(1)][j]);
                    potentialWord.append(letters[keyPadNums.at(2)][k]);
                    potentialWord.append(letters[keyPadNums.at(3)][l]);
                    FindPotentialWord(acceptedWords, wordBank, potentialWord);
                }
            }
        }
    }
}

// Searches the entire wordbank for the target string, if a match exists, the target is added to the acceptedWords vector
void FindPotentialWord(vector<string> &acceptedWords, const vector<string> &wordBank, string target)
{
    for (unsigned int i = 0; i < wordBank.size(); i++)
    {
        if (target == wordBank.at(i))
        {
            acceptedWords.push_back(target);
        }
    }
}

// Writes the result to output.txt
void WriteOutput(const vector<string> &threeLetterWords, const vector<string> &fourLetterWords)
{
    ofstream output;
    output.open("output.txt");
    for (unsigned int i = 0; i < threeLetterWords.size(); i++)
    {
        for (unsigned int j = 0; j < fourLetterWords.size(); j++)
        {
            output << threeLetterWords.at(i) << "-";
            output << fourLetterWords.at(j) << endl;
        }
    }
    output.close();
}