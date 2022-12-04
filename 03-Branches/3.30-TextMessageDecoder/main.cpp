/*
(1) Use getline() to get a line of user input into a string. Output the line. (3 pts)

Ex:

Enter text:
IDK if I'll go. It's my BFF's birthday. 
You entered: IDK if I'll go. It's my BFF's birthday.

(2) Search the string (using find()) for common abbreviations and print a list of each found abbreviation along with its decoded meaning. (3 pts)

Ex:

Enter text:
IDK if I'll go. It's my BFF's birthday. 
You entered: IDK if I'll go. It's my BFF's birthday. 
BFF: best friend forever
IDK: I don't know
Support these abbreviations:

BFF -- best friend forever
IDK -- I don't know
JK -- just kidding
TMI -- too much information
TTYL -- talk to you later
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   
   string userLine {};
   cout << "Enter text:" << endl;
   getline(cin, userLine);
   
   cout << "You entered: " << userLine << endl;
   
   if (userLine.find("BFF") != string::npos) {
      cout << "BFF: best friend forever" << endl;
   }
   if (userLine.find("IDK") != string::npos) {
      cout << "IDK: I don't know" << endl;
   }
   if (userLine.find("JK") != string::npos) {
      cout << "JK: just kidding" << endl;
   }
   if (userLine.find("TMI") != string::npos) {
      cout << "TMI: too much information" << endl;
   }
   if (userLine.find("TTYL") != string::npos) {
      cout << "TTYL: talk to you later" << endl;
   }

   return 0;
}