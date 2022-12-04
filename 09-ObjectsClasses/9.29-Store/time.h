#include <iostream>
#include <string>

using namespace std;

#ifndef TIME_H
#define TIME_H

class Time {
public:
   Time(int h=9, int m=0):hours(h),minutes(m) {};
   int getHours() { return hours; };
   int getMinutes() { return minutes; };
   void setHours(int h) { hours = h; };
   void setMinutes(int m) { minutes = m; };
   
private:
   int hours;
   int minutes;
};

#endif