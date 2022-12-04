/*A "jiffy" is the scientific name for 1/100th of a second. Define a function named JiffiesToSeconds that takes a float as a parameter, representing the number of "jiffies", and returns a float that represents the number of seconds. Then, write a main program that reads the number of jiffies as an input, calls function JiffiesToSeconds() with the input as argument, and outputs the number of seconds.

Output each floating-point value with three digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(3); once before all other cout statements.

Ex: If the input is:

15.25
the output is:

0.152
The program must define and call a function:
double JiffiesToSeconds(double userJiffies)
*/

#include <iostream>
#include <iomanip>

using namespace std;

double JiffiesToSeconds(double j);

int main() {
    double jiff {};
    cin >> jiff;
    cout << fixed << setprecision(3);
    cout << JiffiesToSeconds(jiff) << endl;
    return 0;
}

double JiffiesToSeconds(double j) {
    return j / 100.0;
}