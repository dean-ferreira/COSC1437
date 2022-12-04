/*

Randomly generate 10 integers between 0 and 1000, and store them into an array.
The program will sum all the odd numbers in the array together and compute their average.
The program will output the generated integers and the computed average.
Your program should provide a single input of an integer, which will be used to set the srand(int) function to choose a sequence of random numbers.
The output average should be printed with 2 digits precision.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int arraySize = 10;
    int userArray [arraySize];
    int oddNumSum {};
    int oddNumSize {};
    double oddNumAverage {};
    int seedVal {};

    cin >> seedVal;
    srand(seedVal);

    for (int i = 0; i < arraySize; i++) {
        userArray[i] = rand() % 1001;

        if (userArray[i] % 2 != 0) {
            oddNumSize += 1;
            oddNumSum += userArray[i];
        }
    }

    oddNumAverage = static_cast<double>(oddNumSum) / oddNumSize;

    cout << fixed << setprecision(2);
    cout << oddNumAverage;
    return 0;
}