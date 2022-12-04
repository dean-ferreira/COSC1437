/*
Complete the function template genericSort so that it sorts any type of array (you can use the sorting algorithm of your choice, including bubble sorting, selection sorting, and/or quick sort).

Then, complete the class Rectangle with the necessary operators so that genericSort can sort an array of Rectangle objects.

Hints:

Rectangles objects are sorted by area. You will need to overload either '>' or '<' operator to compare two rectangle objects!! A rectangle is said larger than another rectangle as the former has a larger area.
The unit tests need the overloading operator !=. Two rectangles are equal (or identical) if they have the same width and the same height (or length in this example).
*/

#include <iostream>
#include <string>

#include "rectangle.h"
using namespace std;

//FIX ME: Implement the genericSort() function template
template<typename T>
void genericSort(T array[], int size) {
   T temp;
   for (int j = 0; j < size-1; j++) {
      for (int i = 0; i < size-1; i++) {
         if (array[i] > array[i+1]) {
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
         }
      }
   }
}


int main()
{
   /*These arrays are for testing purpose
   int myArray[] = {10, 2, 6, 12, 4};
   char Array2[] = {'g', 'a', 'q', 'p', 'f'};
   int n=5; 
   */
   int n = 5;
   //int myArray[] = {10,2,6,12,4};
   char myArray[] = {'g', 'a', 'q', 'p', 'f'};
   for (int i = 0; i < n; i++) {
      cout << myArray[i] << " ";
   }
   cout << endl;
   genericSort(myArray, n);
   for (int i = 0; i < n; i++) {
      cout << myArray[i] << " ";
   }
   cout << endl;
}
