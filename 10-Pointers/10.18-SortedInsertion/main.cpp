/*
Implement a program that takes the input of an integer array with the user specified size. Each time when the user inputs an integer, the program inserts it to the appropriate position so that all existing elements are sorted in an ascending order. After entering all integer, the program will output the sorted array.

For example, the user inputs the following to the program

5 9 2 8 4 0
The program outputs

0 2 4 8 9
Note that you should use dynamic allocation to create the dynamic array during run time based on the first integer input by the user.
*/

#include <iostream>

using namespace std;

void PrintArray(int array[], int size) {
   for (int i = 0; i < size; i++) {
      cout << array[i] << " ";
   }
   // cout << endl;
}

void InsertionSort(int array[], int size, int newValue) {
   int i;
   int j;
   int temp;
   
   for (i = 1; i < size; i++) {
      j = i;
      
      while (j > 0 && array[j] < array[j - 1]) {
         temp = array[j];
         array[j] = array[j - 1];
         array[j - 1] = temp;
         j--;
      }
   }
}

int main() {
   int size {};
   cin >> size;
   
   int *numbers = new int [size];
   
   for (int i = 0; i < size; i++) {
      cin >> numbers[i];
      InsertionSort(numbers, i+1, numbers[i]);
      // PrintArray(numbers, i+1);
   }
   
   PrintArray(numbers, size);
   delete [] numbers;
   numbers = nullptr;
   return 0;
}