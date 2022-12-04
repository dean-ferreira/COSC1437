/*
	
2520 is the smallest number that is evenly divisible by all of the numbers from 1 to 10 inclusive. 
That is: 2520 % 1 ==  2520 % 2 ==  2520 % 3 ==  2520 % 4 ==  2520 % 5 ==  2520 % 6 ==  2520 % 7 ==  2520 % 8 ==  2520 % 9 ==  2520 % 10 == 0

What is the smallest positive number (greater than zero) that is evenly divisible by all of the numbers from 1 to 20 inclusive?
*/
#include <iostream>

using namespace std;

int main() {
    bool evenlyDivisible = false;
    bool breakOccured = false;

    int x = 232792560;
    string test;
    while(!evenlyDivisible) {
        //cout << x << endl;
        for (int i = 1; i < 21; i++) {
            cout << x << " % " << i << " = " << x%i << endl;
            if (x % i != 0) {
                breakOccured = true;
                break;
            }
        }

        if (breakOccured) {
            x++;
            breakOccured = false;
        }
        else {
            evenlyDivisible = true;
        }
    }
    cout << x << endl;
    return 0;
}

// 64515
// 1089154
// 116579
// S
// 769
// 49
// 
// 232792560
// 
