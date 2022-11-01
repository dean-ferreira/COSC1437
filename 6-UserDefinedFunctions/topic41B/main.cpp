#include <iostream>

using namespace std;

void GetInput(int data[], int &NumInputVals);
bool FindLocalMaximum(int data[], int NumInputVals, int localMax[], int &NumLocalMax);

int main() {
    int numValues {};
    cin >> numValues;
    int values [20];
    int maxValues [20];
    int maxCount {};
    GetInput(values, numValues);
    if (FindLocalMaximum(values, numValues, maxValues, maxCount)) {
        cout << "Local maximum: ";
         for (int i = 0; i < maxCount; i++) {
            cout << maxValues[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "No local maximum found." << endl;
    }
    return 0;
}

void GetInput(int data[], int &NumInputVals) {
    for (int i = 0; i < NumInputVals; i++) {
        cin >> data[i];
    }
}

bool FindLocalMaximum(int data[], int NumInputVals, int localMax[], int &NumLocalMax) {
    NumLocalMax = 0;
    bool foundFlag = false;
    for (int i = 0; i < NumInputVals; i++) {
        if (data[i] > data[i - 1] && data[i] > data[i + 1]) {
            localMax[NumLocalMax] = data[i];
            NumLocalMax += 1;
            foundFlag = true;
        }
    }

    return foundFlag;
}