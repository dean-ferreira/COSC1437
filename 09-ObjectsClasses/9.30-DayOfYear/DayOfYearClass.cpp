#include "DayOfYearClass.h"

// provide the implementation of the member functions of the DayOfYear class belowstring DayOfYear::toString()
DayOfYear::DayOfYear() {
    day = 1;
    month = 1;

}
DayOfYear::DayOfYear(int dayValue, int monthValue) {
    if (dayValue < 1 || dayValue > 31) {
        dayValue = 1;
    }
    if (monthValue < 1 || monthValue > 12) {
        monthValue = 1;
    }
    if (monthValue == 2) {
        if (dayValue > 29) {
            dayValue = 1;
        }
    }

    day = dayValue;
    month = monthValue;
}

string DayOfYear::toString()
{
    string out;
    
    switch(month)
    {
        case 1:
            out = "January " + to_string(day);
            break;
        case 2:
            out = "February " + to_string(day);
            break;
        case 3:
            out = "March " + to_string(day);
            break;
        case 4:
            out = "April " + to_string(day);
            break;
        case 5:
            out = "May " + to_string(day);
            break;
        case 6:
            out = "June " + to_string(day);
            break;
        case 7:
            out = "July " + to_string(day);
            break;
        case 8:
            out = "August " + to_string(day);
            break;
        case 9:
            out = "September " + to_string(day);
            break;
        case 10:
            out = "October " + to_string(day);
            break;
        case 11:
            out = "November " + to_string(day);
            break;
        case 12:
            out = "December " + to_string(day);
            break;
    }
    return out;
}


void DayOfYear::printDate()
{
    cout << toString() << endl;
}

