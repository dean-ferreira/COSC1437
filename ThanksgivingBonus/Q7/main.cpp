/*
Palindrome numbers are numbers that remain the same when the digits are reversed, for example: 11, 3553, 12321, etc.
Some of these numbers are also primes and are known as palindromic primes, for example, the first six palindromic primes are 2, 3, 5, 7, 11, and 101.
The sum of these first six(6) palindromic prime numbers is 129. The sum of the first sixty (60) palindromic primes is 850019.

What is the sum of the first 600 palindromic primes? 
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPrime(int n) {
    if (n > 1) {
        for (int i = 2; i < (n/2) + 1; i++) {
            if (n%i == 0) {
                return false;
            }
        }
        return true;
    }
    return false;
}

string ReverseString(string& str) {
    string reversed {};
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed.push_back(str.at(i));
    }
    return reversed;
}

int main() {
    vector<int> palindromicPrimes;
    int x = 2;
    while (palindromicPrimes.size() < 600) {
        if (isPrime(x)) {
            string str = to_string(x);
            if (str == ReverseString(str)) {
                palindromicPrimes.push_back(x);
            }
        }
        x++;
    }
    int sum = 0;
    for (size_t i = 0; i < palindromicPrimes.size(); i++) {
        cout << palindromicPrimes.at(i) << " ";
        sum += palindromicPrimes.at(i);
    }
    cout << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}