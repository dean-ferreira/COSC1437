/*
Write a program that reads a list of integers, and outputs the two smallest integers in the list, in ascending order. The input begins with an integer indicating the number of integers that follow. You can safely assume the number of input integers is always less than or equal to 10.

Ex: If the input is:

5 10 5 3 21 2
then the program will output:

2 and 3
You can assume that the list of integers will have at least 2 values.

Hint: Make sure to initialize the second smallest and the smallest integers properly.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
   int listSize {};
   cin >> listSize;
   int intArray [listSize];
   int newInt {};
   int temp {};
   
   for (int i = 0; i < listSize; i++) {
      cin >> newInt;
      intArray[i] = newInt;
   }
   
   for (int i = 0; i < listSize; i++) {
      for (int j = 0; j < listSize; j++) {
         if (intArray[i] < intArray[j]) {
            temp = intArray[i];
            intArray[i] = intArray[j];
            intArray[j] = temp;
         }
      }
   }
   
   cout << intArray[0] << " and " << intArray[1] << endl;
   return 0;
}