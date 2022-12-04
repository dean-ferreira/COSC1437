/*
    Write a program whose input is a character and a string,
    and whose output indicates the number of times the character appears in the string.
    The output should include the input character and use the plural form, n's,
    if the number of times the characters appears is not exactly 1.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {

   char targetChar {};
   string userString {};
   int count {};
   
   cin >> targetChar;
   getline(cin, userString);
   
   for (size_t i = 0; i < userString.size(); i++) {
      if (userString.at(i) == targetChar) {
          count += 1;
      }
   }
   
   if (count == 1) {
      cout << count << " " << targetChar << endl;
   }
   
   else {
      cout << count << " " << targetChar << "'s" << endl;
   }

   return 0;
}