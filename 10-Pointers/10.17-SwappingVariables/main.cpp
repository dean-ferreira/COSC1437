/*
Complete the function swap() so that it takes in input two integer pointers and swaps their content.

How can you use this function on integer variables? Try to use this function on two integer variables acquired through standard input.
*/

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int x {}, y {};
    cin >> x >> y;

    swap(&x, &y);
    cout << x << " " << y;

    return 0;
}