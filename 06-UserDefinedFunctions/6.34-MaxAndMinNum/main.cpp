#include <iostream>
using namespace std;

int MaxNumber(int num1, int num2, int num3, int num4);
int MinNumber(int num1, int num2, int num3, int num4);

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "Maximum is " << MaxNumber(a, b, c, d) << endl;
    cout << "Minimum is " << MinNumber(a, b, c, d) << endl;
   return 0;
}

int MaxNumber(int num1, int num2, int num3, int num4) {
    int arr[] = {num1, num2, num3, num4};
    int max {};
    max = arr[0];
    for (int i = 1; i < 4; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}

int MinNumber(int num1, int num2, int num3, int num4) {
    int arr[] = {num1, num2, num3, num4};
    int min {};
    min = arr[0];
    for (int i = 1; i < 4; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    return min;
}