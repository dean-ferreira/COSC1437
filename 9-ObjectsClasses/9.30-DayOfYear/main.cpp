/*
In this exercise, we will develop a class called DayOfYear. The class should include:

Member variables for day and month (int)
Appropriate mutators and accessors
A constructor with two parameters to set the day and month of the object. Note that if the day is out of the range of the given month (e.g., not between 1 and 28 for February), set the day to be 1. Similarly, if the input value for day is out of range, set its value to be 1.
A default constructor that sets the date to January 1st
A toString function that returns the date as a string ("May 3", "June 22")
A print function that calls toString and print the date to screen
An overloaded print function with an additional parameter year
*/

#include <iostream>
#include <string>
#include "DayOfYearClass.h"

using namespace std;

int main() {
    int monthValue {}, dayValue {};
    cin >> dayValue >> monthValue;

    DayOfYear newDayOfYear(dayValue, monthValue);

    newDayOfYear.printDate();
    return 0;
}