/*
Given two input integers for an arrow body and arrowhead (respectively), print a right-facing arrow.

Ex: If the input is:

0 1
the output is:

     1
     11
00000111
000001111
00000111
     11
     1

*/

#include <iostream>
using namespace std;

int main() {
   int baseChar;
   int headChar;
   
   cin >> baseChar;
   cin >> headChar;
   
   cout << "     " << headChar << endl;
   cout << "     " << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << endl;
   cout << "     " << headChar << headChar << endl;
   cout << "     " << headChar << endl;

   return 0;
}
