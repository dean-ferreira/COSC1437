/*
Enter x: 
5
x doubled is: 10
*/

#include <iostream>
using namespace std;

int main() {
   int x;

   cout << "Enter x: " << endl;
   cin  >> x;
   
   // cout << x << endl;  // Student mistakenly is echoing the input to output to match example
   cout << "x doubled is: " << 2 * x << endl;
   
   return 0;
}
