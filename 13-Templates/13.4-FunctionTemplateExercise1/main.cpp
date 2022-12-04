/*
Define a function template, called indexOfSmallest([an array], [size of the array]) that takes two values as the input, one is an array of any type and the other is an integer showing the size of the array. This function will return the index of the smallest value in an array. For example, if an integer array as follows is given

20 38 23 22 49 1 34
the function will return 5. If a char array as follow is given

'S' 'M' 'I' 'T' 'H'
it will return 4 (as 'H' is ahead of the other letters in this case alphabetically).
*/

#include <iostream>
#include <string>
#include "template_functions.h"

using namespace std;

// The following is a sample main() function for you to test your function template
int main() {
    float a[5];
    
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << indexOfSmallest(a, 5) << endl;
}