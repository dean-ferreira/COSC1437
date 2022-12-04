#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#define MAX_SIZE 20

using namespace std;

void BubbleSort(double arr[], int n);

int main() {
    string inputFileName {};
    cin >> inputFileName;

    ifstream input;
    input.open(inputFileName);
    if (!input.is_open()) {
        cout << "File not found" << endl;
        return 1;
    }

    double *data = new double [MAX_SIZE];
    string line {};
    getline(input, line);
    stringstream lineStream(line);
    string value {};
    int count = 0;
    while (getline(lineStream, value, ',')) {
        if (count == 0) {
            data[count] = stof(value);
        }
        else {
            data[count] = stof(value.substr(1, value.length() - 1));
        }
        count += 1;
    }
    input.close();

    BubbleSort(data, count);
    ofstream output;
    output.open("output.txt");
    for (int i = 0; i < count; i++) {
        output << data[i] << ", ";
    }
    output.close();
    delete [] data;
    return 0;
}

void BubbleSort(double arr[], int n) {
    int i, j;
    double temp;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            // Comparing consecutive data and switching balues if value at j > j+1.
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}