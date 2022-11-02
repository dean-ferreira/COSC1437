#include <iostream>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

#include "timer.h"


// Please provide the implementation of other member functions here
Timer::Timer(int _hours, int _minutes, int _seconds) : hours {_hours}, minutes {_minutes}, seconds {_seconds} {

}

void Timer::setHours(int _hours) {
    hours = _hours;
}

void Timer::setMinutes(int _minutes) {
    minutes = _minutes;
}
void Timer::setSeconds(int _seconds) {
    seconds = _seconds;
}

void Timer::reduceSeconds() { // -- reduce the current value of seconds by 1 if it is larger than 0, otherwise/else, call the reduceMinutes() function and set the current value of seconds to be 59
    if (seconds > 0) {
        seconds--;
    }
    else {
        reduceMinutes();
        seconds = 59;
    }
}

void Timer::reduceMinutes() { // -- reduce the current value of minutes by 1 if it is larger than 0, otherwise/else, call the reduceHours() function and set the current value of minutes to be 59
    if (minutes > 0) {
        minutes--;
    }
    else {
        reduceHours();
        minutes = 59;
    }
}

void Timer::reduceHours() { // -- reduce the current value of hours by `
    hours--;
}

void Timer::start()
{
    cout << "Timer set at " << toString() << endl;
    cout << "Timer started" << endl;
    while(hours > 0 || minutes > 0 || seconds > 0)
    {
        cout << toString() << endl;
        this_thread::sleep_for (std::chrono::seconds(1));
        reduceSeconds();
    }
    cout << "Time!" << endl;
}

string Timer::toString()
{
    string out;
    if(hours < 10)
        out = "0";
    
    out = out + to_string(hours) + ":";
    
    if(minutes < 10)
        out = out + "0";
    
    out = out + to_string(minutes) + ":";
    
    if(seconds < 10)
        out = out + "0";
    
    out = out + to_string(seconds);
    
    return out;
}