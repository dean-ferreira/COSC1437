/*
Many documents use a specific format for a person's name. Write a program whose input is:

firstName middleName lastName

and whose output is:

lastName, firstInitial.middleInitial.

Ex: If the input is:

Pat Silly Doe
the output is:

Doe, P.S.
If the input has the form: firstName lastName

the output is:

lastName, firstInitial.

Ex: If the input is:

Julia Clark
the output is:

Clark, J.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   string firstName {};
   string middleName {};
   string lastName = {};
   
   cin >> firstName >> middleName >> lastName;
   
   if (!lastName.length()) {
      cout << middleName << ", " << firstName.at(0) << "." << endl;
   }
   else {
      cout << lastName << ", " << firstName.at(0) << "." << middleName.at(0) << "." << endl;
   }

   return 0;
}