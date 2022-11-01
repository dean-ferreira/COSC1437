#include <iostream>
#include <cstdlib>

using namespace std;

string CoinFlip();

int main() {
    srand(2);
    int numFlips {};
    cin >> numFlips;
    
    for (int i = 0; i < numFlips; i++) {
        cout << CoinFlip() << endl;
    }
    
    return 0;
}

string CoinFlip() {
    int value = rand() % 2;
    if (value == 0) {
        return "Tails";
    }
    else {
        return "Heads";
    }
}