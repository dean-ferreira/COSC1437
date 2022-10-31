/*
    Statistics are often calculated with varying amounts of input data.
    Write a program that takes any number of non-negative integers as input, and outputs the max and average.
    A negative integer ends the input and is not included in the statistics. Assume the input contains at least one non-negative integer.

    Output each floating-point value with two digits after the decimal point, which can be achieved by executing cout << fixed << setprecision(2); once before all other cout statements.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int userInt {};
    int maxValue {};
    int count {};
    int sum {};
    double average {};

    cin >> userInt;

    while (userInt >= 0) {
        count += 1;
        sum += userInt;

        if (count == 1) {
            maxValue = userInt;
        }
        else {
            if (userInt > maxValue) {
                maxValue = userInt;
            }
        }

        cin >> userInt;
    }

    average = static_cast<double>(sum) / count;

    cout << fixed << setprecision(2);
    cout << maxValue << " " << average << endl;

    return 0;
}