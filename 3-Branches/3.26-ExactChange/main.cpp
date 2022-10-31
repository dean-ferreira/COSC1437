/*
Write a program with total change amount as an integer input, and output the change using the fewest coins, one coin type per line. The coin types are Dollars, Quarters, Dimes, Nickels, and Pennies. Use singular and plural coin names as appropriate, like 1 Penny vs. 2 Pennies.

Ex: If the input is:

0 
(or less than 0), the output is:

No change 
Ex: If the input is:

45
the output is:

1 Quarter
2 Dimes 
*/

#include <iostream>
using namespace std;

int main() {

   int cents {};
   cin >> cents;
   
   int penny {};
   int nickel {};
   int dime {};
   int quarter {};
   int dollar {};
   
   if (cents <= 0) {
      cout << "No change" << endl;
   }
   else {
      dollar = cents / 100;
      cents %= 100;
      
      quarter = cents / 25;
      cents %= 25;
      
      dime = cents / 10;
      cents %= 10;
      
      nickel = cents / 5;
      cents %= 5;
      
      penny = cents;
   }
   
   if (dollar) {
      if (dollar == 1) {
         cout << dollar << " Dollar" << endl;
      }
      else {
         cout << dollar << " Dollars" << endl;
      }
   }
   if (quarter) {
      if (quarter == 1) {
         cout << quarter << " Quarter" << endl;
      }
      else {
         cout << quarter << " Quarters" << endl;
      }
   }
   if (dime) {
      if (dime == 1) {
         cout << dime << " Dime" << endl;
      }
      else {
         cout << dime << " Dimes" << endl;
      }
   }
   if (nickel) {
      if (nickel == 1) {
         cout << nickel << " Nickel" << endl;
      }
      else {
         cout << nickel << " Nickels" << endl;
      }
   }
   if (penny) {
      if (penny == 1) {
         cout << penny << " Penny" << endl;
      }
      else {
         cout << penny << " Pennies" << endl;
      }
   }

   return 0;
}