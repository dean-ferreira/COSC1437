/*
Define a generic function called getMinimumValue ()
that takes as input three items of the same type and finds the minimum value of the three.
Use a template function to ensure that it works for any type used.

Define a generic function called getMaximumValue()
that takes as input three items of the same type and finds the maximum value of the three.
Again, use a template function to ensure that it works for any type used.
*/

#include <string>
#include <iostream>

using namespace std;

// TODO: Define a generic method called getMinValue() that
//       takes in three variables of generic type as arguments.
//       The return type of the method is the minimum value of the three
//       Define a generic method called getMaxValue() that
//       takes in three variables of generic type as arguments.
//       The return type of the method is the maximum value of the three
template<typename T>
T getMinValue(T x, T y, T z) {
    T min = x;
    if (y < min) {
        min = y;
    }
    if (z < min) {
        min = z;
    }
    return min;
}

template<typename T>
T getMaxValue(T x, T y, T z) {
    T max = x;
    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }
    return max;
}

int main() {
   // Uncomment the lines below for testing and the final submission
//    Using three strings
   cout << "Min: " << getMinValue('a', 'b', 'z') << endl;
   cout << "Max: " << getMaxValue('a', 'b', 'z') << endl;
   
   // Using three doubles
   cout << "Min: " << getMinValue(1.23, 0.45, 100.1) << endl;
   cout << "Max: " << getMaxValue(1.23, 0.45, 100.1) << endl;
   
   // Using three integers
   cout << "Min: " << getMinValue(11, 8, 9) << endl;
   cout << "Max: " << getMaxValue(11, 8, 9) << endl;
   
   return 0;
}