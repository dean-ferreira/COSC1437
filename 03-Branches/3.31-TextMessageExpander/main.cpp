/*
(1) Get a line of text from the user. Output that line. (1 pt)

Ex:

Enter text:
IDK how that happened. TTYL. 
You entered: IDK how that happened. TTYL.

(2) Output the line again, this time expanding common text message abbreviations. (5 pts)

Ex:

Enter text:
IDK how that happened. TTYL. 
You entered: IDK how that happened. TTYL.
Expanded: I don't know how that happened. talk to you later.
Support these abbreviations:

BFF -- best friend forever
IDK -- I don't know
JK -- just kidding
TMI -- too much information
TTYL -- talk to you later
Note: If an abbreviation appears twice, only expand its first instance.
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
      string acronym = "BFF";
      int pos = userLine.find(acronym);
      userLine.erase(pos, acronym.length());
      userLine.insert(pos, "best friend forever");
   }
   if (userLine.find("IDK") != string::npos) {
      string acronym = "IDK";
      int pos = userLine.find(acronym);
      userLine.erase(pos, acronym.length());
      userLine.insert(pos, "I don't know");
   }
   if (userLine.find("JK") != string::npos) {
      string acronym = "JK";
      int pos = userLine.find(acronym);
      userLine.erase(pos, acronym.length());
      userLine.insert(pos, "just kidding");
   }
   if (userLine.find("TMI") != string::npos) {
      string acronym = "TMI";
      int pos = userLine.find(acronym);
      userLine.erase(pos, acronym.length());
      userLine.insert(pos, "too much information");
   }
   if (userLine.find("TTYL") != string::npos) {
      string acronym = "TTYL";
      int pos = userLine.find(acronym);
      userLine.erase(pos, acronym.length());
      userLine.insert(pos, "talk to you later");
   }
   
   cout << "Expanded: " << userLine << endl;
   return 0;
}