/*
Write a program that reads a list of words, and a character. The output of the program is every word in the list of words that contains the character at least once. For coding simplicity, follow each output word by a comma, even the last one. Assume at least one word in the list will contain the given character. The number of input words is always less than or equal to 10. If the user enters more than 10 words before the character, the program will output Too many words and exit.

Ex: If the input is:

hello zoo sleep drizzle z
then the program will output:

zoo,drizzle,
If the input is:

hello hello hello hello hello hello hello hello hello hello hello h
then the program will output:

Too many words
To achieve the above, use a while or a do-while loop to read each word as a string until it reads a word with a single character. Store all these words in a string array. Keep in mind that the character 'a' is not equal to the character 'A'.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
   vector<string> wordBank;
   string userString;
   char userChar;
   
   cin >> userString;
   
   while (userString.length() != 1) {
      wordBank.push_back(userString);
      cin >> userString;
   }
   userChar = userString[0];
   
   if (wordBank.size() > 10) {
      cout << "Too many words" << endl;
   }
   else {
      for (auto word: wordBank) {
         for (auto letter: word) {
            if (letter == userChar) {
               cout << word << ",";
               break;
            }
         }
      }
   }
   
   
   

   return 0;
}