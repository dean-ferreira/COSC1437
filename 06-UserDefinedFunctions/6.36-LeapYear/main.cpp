#include <iostream>

using namespace std;

int DaysInFeb(int userYear);

int main() {
   int year {};
   cin >> year;
   cout << year << " has " << DaysInFeb(year) << " days in February." << endl;

   return 0;
}

int DaysInFeb(int userYear) {
    int days = 28;
    if (userYear % 4 == 0) {
        if (userYear % 100 == 0) {
            if (userYear % 400 == 0) {
                days = 29;
            }
        }
        else {
            days = 29;
        }
    }

    return days;
}