#include <iostream>
#include <string>

using namespace std;

// declare the DayOfYear class below
class DayOfYear {
private:
    int day;
    int month;

public:
    DayOfYear();
    DayOfYear(int dayValue, int monthValue);
    int getDay() { return day; }
    void setDay(int dayValue) { day = dayValue; }

    int getMonth() { return month; }
    void setMonth(int monthValue) { month = monthValue; }

    string toString();
    void printDate();
};