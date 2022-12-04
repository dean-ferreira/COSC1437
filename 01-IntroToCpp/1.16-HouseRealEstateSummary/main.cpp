/*
Sites like Zillow get input about house prices from a database and provide nice summaries for readers.
Write a program with two inputs, current price and last month's price (both integers).
Then, output a summary listing the price, the change since last month, and the estimated monthly mortgage computed as (currentPrice * 0.051) / 12
(Note: Output directly, do not store in a variable, and end with a newline).

Ex: If the input is:

200000 210000
the output is:

This house is $200000. The change is $-10000 since last month.
The estimated monthly mortgage is $850.
Note: Getting the precise spacing, punctuation, and newlines exactly right is a key point of this assignment. Such precision is an important part of programming.
*/

#include <iostream>
using namespace std;

int main() {
   int currentPrice;
   int lastMonthsPrice;
   
   cin >> currentPrice;
   cin >> lastMonthsPrice;

   cout << "This house is $" << currentPrice << ". The change is $" << currentPrice - lastMonthsPrice << " since last month." << endl;
   cout << "The estimated monthly mortgage is $" << currentPrice * 0.051 / 12 << "." << endl;
   return 0;
}
