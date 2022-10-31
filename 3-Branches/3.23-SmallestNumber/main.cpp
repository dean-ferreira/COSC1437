/*
Write a program whose inputs are three integers, and whose output is the smallest of the three values.

Ex: If the input is:

7 15 3
the output is:

3
*/

#include <iostream>
using namespace std;

int main() {
   
   int x {};
   int y {};
   int z {};
   
   cin >> x >> y >> z;
   
   int small = x;
   
   if (small > y) {
      small = y;
   }
   if (small > z) {
      small = z;
   }
   
   cout << small << endl;

   return 0;
}