/*
Write a program that reads 12 integers into a 2D integer array with 4 rows and 3 columns. The program then outputs the transpose of the 2D array -- where the rows become columns and the columns become rows.

Ex: If the input is:

1 2 3
4 5 6
7 8 9
7 7 7
then the output is:

1 4 7 7 
2 5 8 7 
3 6 9 7 
For coding simplicity, output a space after every integer, including the last one on each row.
*/

#include <iostream>
using namespace std;

int main() {

   int twoDim [4][3];
   int temp {};
   int newArr [3][4];
   
   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 3; j++) {
         cin >> temp;
         twoDim[i][j] = temp;
      }
   }
   
   
   for (int j = 0; j < 3; j++) {
      for (int i = 0; i < 4; i++) {
         newArr[j][i] = twoDim[i][j];
      }
   }
   
   for (int j = 0; j < 3; j++) {
      for (int i = 0; i < 4; i++) {
         cout << newArr[j][i] << " ";
      }
      cout << endl;
   }
   

   return 0;
}
