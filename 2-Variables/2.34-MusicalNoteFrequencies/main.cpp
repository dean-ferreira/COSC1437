/*
On a piano, a key has a frequency, say f0. Each higher key (black or white) has a frequency of f0 * rn, where n is the distance (number of keys) from that key, and r is 2(1/12). Given an initial key frequency, output that frequency and the next 4 higher key frequencies.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

440.0
(which is the A key near the middle of a piano keyboard), the output is:

440.00 466.16 493.88 523.25 554.37
Note: Use one statement to compute r = 2(1/12) using the pow function (remember to include the cmath library). Then use that r in subsequent statements that use the formula fn = f0 * rn with n being 1, 2, 3, and finally 4.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   
   double userInput {};
   cin >> userInput;
   
   cout << fixed << setprecision(2);
   
   for (int i {0}; i < 4; i++) {
      cout << userInput * pow(pow(2.0, (1.0 / 12.0)), i) << " ";
   }
   cout << userInput * pow(pow(2.0, (1.0 / 12.0)), 4) << endl;
   
   return 0;
}