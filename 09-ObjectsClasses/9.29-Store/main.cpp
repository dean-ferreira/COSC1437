/*
Complete the Store class with four private variables

string name;   // store the name of a store, like "Macy's", "Kroger", etc.
string type;     // the type of the store, "department", "grocery", "supermarket", etc.
Time opening;
Time closing;
A constructor that takes two parameters as input is given in the Store class. Modify this constructor so that it sets the default opening and closing times to 9 hours and 0 minutes and 17 hours and 0 minutes, respectively. Then, add another constructor that handles the additional new variables, i.e., an overloaded constructor that takes four parameters as the input.

Don't forget to include the right headers!
*/

#include <iostream>
#include <string>
//include headers
#include "store.h"

using namespace std;

int main() {
   
   Store store1("Macy's", "Department");
   
   // Add the other stores here
   
   return 0;
}