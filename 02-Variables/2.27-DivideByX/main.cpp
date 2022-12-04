/*
Write a program using integers userNum and x as input, and output userNum divided by x three times.

Ex: If the input is:

2000 2
the output is:

1000 500 250
Note: In C++, integer division discards fractions. Ex: 6 / 4 is 1 (the 0.5 is discarded).
*/

#include <iostream>
using namespace std;

int main() {

   int userNum {};
   int x {};
   
   cin >> userNum >> x;
   
   userNum /= x;
   cout << userNum << " ";
   userNum /= x;
   cout << userNum << " ";
   userNum /= x;
   cout << userNum << endl;

   return 0;
}