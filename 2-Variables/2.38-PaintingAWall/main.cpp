/*

Program Specifications Write a program to calculate the cost to paint a wall. Amount of required paint is based on the wall area. Total cost includes paint and sales tax.

Note: This program is designed for incremental development. Complete each step and submit for grading before starting the next step. Only a portion of tests pass after each step but confirm progress.

Step 1 (2 pts). Read from input wall height, wall width, and cost of one paint can (doubles). Calculate and output the wall's area to one decimal place using cout << fixed << setprecision(1) << "Wall area: " << wallArea << " sq ft" << endl;. Submit for grading to confirm 1 test passes.

Ex: If the input is:

12.0 15.0 29.95
the output is:

Wall area: 180.0 sq ft
Step 2 (2 pts). Calculate and output the amount of paint needed to three decimal places. One gallon of paint covers 350 square feet. Submit for grading to confirm 2 tests pass.

Ex: If the input is:

12.0 15.0 29.95
the output is:

Wall area: 180.0 sq ft
Paint needed: 0.514 gallons
Step 3 (2 pts). Calculate and output the number of 1 gallon cans needed to paint the wall. Extra paint may be left over. Hint: Use ceil() to round up to the nearest gallon and convert to an integer. Submit for grading to confirm 4 tests pass.

Ex: If the input is:

12.0 15.0 29.95
the output is:

Wall area: 180.0 sq ft
Paint needed: 0.5142 gallons
Cans needed: 1 can(s)
Step 4 (4 pts). Calculate and output the paint cost, sales tax of 7%, and total cost. Dollar values are output with two decimal places. Submit for grading to confirm all tests pass.

Ex: If the input is:

8.0 8.0 49.20
the output is:

Wall area: 64.0 sq ft
Paint needed: 0.183 gallons
Cans needed: 1 can(s)
Paint cost: $49.20
Sales tax: $3.44
Total cost: $52.64
*/

#include <iostream>
#include <iomanip>              // needed for setprecision() and fixed
#include <cmath>                // needed for ceil()
using namespace std;

int main() {
   const double PAINT_COVERAGE = 350.0;
   const double TAX_RATE = 0.07;
   
   double height {}, width {}, cost {};
   cin >> height >> width >> cost;
   
   double wallArea = height * width;
   cout << fixed << setprecision(1) << "Wall area: " << wallArea << " sq ft" << endl;
   
   double paintNeeded = wallArea / PAINT_COVERAGE;
   cout << "Paint needed: " << fixed << setprecision(3) << paintNeeded << " gallons" << endl;
   
   int cansNeeded = ceil(paintNeeded);
   cout << "Cans needed: " << cansNeeded << " can(s)" << endl;
   
   cout << fixed << setprecision(2);
   
   double subTotal = cansNeeded * cost;
   cout << "Paint cost: $" << subTotal << endl;
   double salesTax = subTotal * TAX_RATE;
   cout << "Sales tax: $" << salesTax << endl;
   
   double total = subTotal + salesTax;
   cout << "Total cost: $" << total << endl;
   
   return 0;
}