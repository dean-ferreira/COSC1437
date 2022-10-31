/*
    Write a program that accepts an integer input from the user and a single character for drawing a triangle.
    Then, output an up-side-down triangle of the requested size using the requested character.

    If the user inputs a negative integer, the program should output
        ERROR: please input only positive integer.

    For example, if the user inputs: 5 *
    *****
    ****
    ***
    **
    *
    * 
*/

#include <iostream>
using namespace std;

int main() {
   char triangleChar;
   int triangleHeight;

   cin >> triangleHeight;
   cin >> triangleChar;
   
   if (triangleHeight < 1) {
      cout << "ERROR: please input only positive integer." << endl;
   }
   
   else {
      for (int i = 0; i < triangleHeight; i++) {
         
         for (int j = triangleHeight - i; j > 0; j--) {
            cout << triangleChar;
         }
   
         cout << endl;
      }
   }
   return 0;
}