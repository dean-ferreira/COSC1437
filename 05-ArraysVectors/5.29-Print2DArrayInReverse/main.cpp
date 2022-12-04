/*
Write a program that reads 12 integers into a 2D integer array with 4 rows and 3 columns. The program then outputs the 2D array in reverse order according to both rows and columns.

Ex: If the input is:

5 7 3
6 4 3
5 6 9
5 2 8
then the output is:

8 2 5 
9 6 5 
3 4 6 
3 7 5 
For coding simplicity, output a space after every integer, including the last one on each row.
*/

#include <iostream>

int main() {
    const int NUM_ROWS = 4;
    const int NUM_COLS = 3;

    int grid [NUM_ROWS][NUM_COLS];

    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++)  {
            std::cin >> grid[i][j];
        }
    }

    for (int i = NUM_ROWS - 1; i >= 0; i--) {
        for (int j = NUM_COLS - 1; j >= 0; j--)  {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}