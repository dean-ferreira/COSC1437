#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#define MAX_SIZE 100

using namespace std;

void BubbleSort(int arr[], int n) {
    int i, j;
    int temp;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            // Comparing consecutive data and switching balues if value at j > j+1.
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    string filename;
    int *data = new int[MAX_SIZE];
    int count = 0;

    //Your solution here
    cin >> filename;
    ifstream input;
    input.open(filename);
    if(!input.is_open()) {
        cout << "File not found." << endl;
        return 1;
    }

    input >> data[count];
    while (!input.fail()) {
        count += 1;
        input >> data[count];
    }
    input.close();

    BubbleSort(data, count);

    for (int i = 0; i < count; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}