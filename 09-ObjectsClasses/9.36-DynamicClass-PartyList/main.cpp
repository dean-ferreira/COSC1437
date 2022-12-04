/*
This exercise defines a Party class to store the location and an attendee list of a party along with the operations performed on the party location and attendee list (e.g., get/change party location and get/change attendee). The Party class is partially completed. Please finish the following remaining tasks.

(1) Complete the Party class with a constructor with parameters, a copy constructor, a destructor, and an overloaded assignment operator (=).

The overloaded constructor takes two parameters as input, a string to specify the party location, and an integer to specify the maximum number of attendees . If the input integer is not positive, set the maximum number of attendees to be 10. Set the current number of attendees to be zero, and dynamically created the array for the list of attendees with the maximum number of attendees
The copy constructor will copy the list of attendees and other attributes using deep copy
The overloaded copy assignment operator (=) will copy the list of attendees and other attributes using deep copy
The destructor should properly release the memory dynamically allocated for the list of attendees
(2) Add an overloaded operator + to add an attendee to the party. You should check whether you reach the maximum number of attendees or not. If not, add this attendee to the list and increase the number of current attendees by 1. Otherwise, output a message "The party is already full!" without adding the attendee.

(3) Add an overloaded operator > to determine which party is bigger (based on number of attendees). If the party on the left hand size is bigger/larger, return true, otherwise, return false.

There is no need to modify the main() function in this exercise. All test cases are unit tests
*/

#include <iostream>

using namespace std;

#include "Party.h"

int main()
{
   return 0;
}