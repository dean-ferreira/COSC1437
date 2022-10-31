/*
Mad Libs are activities that have a person provide various words, which are then used to complete a short story in unexpected (and hopefully funny) ways.

Complete the program to read the needed values from input, that the existing output statement(s) can use to output a short story.

Ex: If the input is:

Eric Chipotle 12 cars
the output is:

Eric went to Chipotle to buy 12 different types of cars.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName;
   string genericLocation;
   int wholeNumber;
   string pluralNoun;
   
   cin >> firstName >> genericLocation >> wholeNumber >> pluralNoun;
   
   cout << firstName << " went to " << genericLocation << " to buy " << wholeNumber << " different types of " << pluralNoun << "." << endl;

   return 0;
}