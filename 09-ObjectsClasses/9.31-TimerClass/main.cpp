/*

This exercise covers the implementation of a class Timer.

(1) It contains three private integer member variables, hours, minutes, and seconds.

(2) It contains two constructors.

default constructor that sets the hours to be 0, minutes to be 1, and seconds to be 0
an overloaded constructor that takes three integers as input to set the hours, minutes, and seconds of the object
(3) It contains the following functions in the public section of the class

void setHours(int); -- sets the hours with the input value
void setMinutes(int); -- set the minutes with the input value
void setSeconds(int); -- set the seconds with the input value
void start(); -- starts the count down of the timer by reducing the value of seconds by 1 every second
string toString(); -- output the current time in a specific format
(4) It contains three private (or helper) functions that update the current seconds, minutes, and hours to get the correct time

void reduceSeconds() -- reduce the current value of seconds by 1 if it is larger than 0, otherwise/else, call the reduceMinutes() function and set the current value of seconds to be 59
void reduceMinutes() -- reduce the current value of minutes by 1 if it is larger than 0, otherwise/else, call the reduceHours() function and set the current value of minutes to be 59
void reduceHours() -- reduce the current value of hours by `
Note: You should declare the Timer class with the above members in the "timer.h" file, and provide the implementation of the respective member functions in the "timer.cpp" file. The implementations of the start() and toString() functions are provided to you in the "timer.cpp" function. Also, the main() function is provided to you so that you do not need to implement it.

You are encouraged to use your local IDE to complete this exercise, and modify the main function to enable a timer with different time period than 5 seconds.
*/

#include <iostream>
#include <string>
#include "timer.h"

using namespace std;

int main() {
    Timer t(0, 0, 5);
    t.start();

    return 0;
}