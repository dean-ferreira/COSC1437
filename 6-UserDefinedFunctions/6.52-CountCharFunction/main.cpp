#include <iostream>
using namespace std;

/* Define your function here */ 
int CalcNumCharacters(string userString, char userChar) {
    int count {};

    for (auto letter: userString) {
        if (letter == userChar) {
            count += 1;
        }
    }

    return count;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   char userChar {};
   string userString {};
   cin >> userChar;
   getline(cin, userString);
   int charCount = CalcNumCharacters(userString, userChar);
   
   if (charCount == 1) {
    cout << charCount << " " << userChar << endl;
   }
   else {
    cout << charCount << " " << userChar << "'s" << endl;
   }
   return 0;
}
