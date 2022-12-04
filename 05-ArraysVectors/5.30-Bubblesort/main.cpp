/*
Complete the following code to sort an array using Bubblesort.

(1) First, the program will take input of 10 integers from the user and store them in an array

(2) Second, the program will sort the numbers in the array in the ascending order using Bubblesor
*/

#include <iostream>

using namespace std;

int main()
{

   int myArray[10];

   
   int i, j, temp;
   
   for (i = 0; i < 10; i++) {
      cin >> temp;
      myArray[i] = temp;
   }
   
   
   //Bubblesort
   for (i = 0; i < 10; i++) {
      // Hint: last i elements are already in position
      for (j = 0; j < (10 - i) - 1; j++) {
         if (myArray[j] > myArray[j+1])
			{
            temp = myArray[j + 1];
            myArray[j +  1] = myArray[j];
            myArray[j] = temp;
			}
      }
   }

   cout << "Sorted array:\n";
   
   for(i=0; i<10; i++)
      cout << myArray[i] << " ";
      
   return 0;
}