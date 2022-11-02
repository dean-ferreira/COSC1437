#ifndef TIMER_H
#define TIMER_H

#include <iostream>

using namespace std;

class Timer {
private:
    int hours;
    int minutes;
    int seconds;

    void reduceSeconds(); // -- reduce the current value of seconds by 1 if it is larger than 0, otherwise/else, call the reduceMinutes() function and set the current value of seconds to be 59
    void reduceMinutes(); // -- reduce the current value of minutes by 1 if it is larger than 0, otherwise/else, call the reduceHours() function and set the current value of minutes to be 59
    void reduceHours(); // -- reduce the current value of hours by `

public:
    Timer(int _hours = 0, int _minutes = 1, int _seconds = 0);
    void setHours(int);
    void setMinutes(int);
    void setSeconds(int);
    void start();
    string toString();
};

#endif