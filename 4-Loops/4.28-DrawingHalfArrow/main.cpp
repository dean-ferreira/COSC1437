#include <iostream>

using namespace std;

int main() {
    int baseHeight {};
    int baseWidth {};
    int headWidth {};
    char arrowChar = '*';

    cin >> baseHeight >> baseWidth;

    do {
        cin >> headWidth;
    } while (headWidth <= baseWidth);

    for (int i = 0; i < baseHeight; i++) {
        for (int j = 0; j < baseWidth; j++) {
            cout << arrowChar;
        }
        cout << endl;
    }

    for (int i = 0; i < headWidth; i++) {
        for (int j = headWidth - i; j > 0; j--) {
            cout << arrowChar;
        }
        cout << endl;
    }
    return 0;
}