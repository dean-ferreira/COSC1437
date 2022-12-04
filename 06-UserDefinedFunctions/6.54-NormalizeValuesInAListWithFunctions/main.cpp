#include <iostream>
#include <iomanip>

using namespace std;

double GetMinimumValue(double myArray[], int size) {
    double minValue {};

    for (int i = 0; i < size; i++) {
        if (i == 0) {
            minValue = myArray[i];
        }
        else {
            if (myArray[i] < minValue) {
                minValue = myArray[i];
            }
        }
    }

    return minValue;
}

int main() {
    int arrayLength {};
    cin >> arrayLength;

    double userList [arrayLength];

    for (int i = 0; i < arrayLength; i++) {
        cin >> userList[i];
    }

    double minValue = GetMinimumValue(userList, arrayLength);

    for (int i = 0; i < arrayLength; i++) {
        userList[i] = double(userList[i]) / minValue;
    }

    cout << setprecision(2) << fixed;
    for (int i = 0; i < arrayLength; i++) {
        cout << userList[i] << " ";
    }
    cout << endl;

    return 0;
}