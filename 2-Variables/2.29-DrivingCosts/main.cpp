/*
Driving is expensive. Write a program with a car's gas milage (miles/gallon) and the cost of gas (dollars/gallon) as floating-point input, and output the gas cost for 20 miles, 75 miles, and 500 miles.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements. Note: End with a newline.

Ex: If the input is:

20.0 3.1599
where the gas mileage is 20.0 miles/gallon and the cost of gas is $3.1599/gallon, the output is:

3.16 11.85 79.00
Note: Real per-mile cost would also include maintenance and depreciation.
*/

#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   double mpg {};
   double cpg {};
   
   cin >> mpg >> cpg;
   
   cout << fixed << setprecision(2);
   cout << 20.0 / mpg * cpg << " ";
   cout << 75.0 / mpg * cpg << " ";
   cout << 500.0 / mpg * cpg << endl;

   return 0;
}