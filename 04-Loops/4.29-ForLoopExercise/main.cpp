#include <iostream>

using namespace std;

int main() {
    int s {};
    cin >> s;
    srand(s);

    int count {};
    int sum {};
    int increment {};
    cin >> count;

    for (int i = 0; i < count; i++) {
        increment = (rand() % 1001);
        if (increment % 2 == 0) {
            sum += increment;
        }
    }
    cout << sum;
    return 0;
}