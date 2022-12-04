#include <iostream>
#include <string>
#include <fstream>

#define MAX_SIZE 100
using namespace std;

int main() {
    string inputFileName {}, outputFileName {};
    cin >> inputFileName >> outputFileName;

    ifstream input;
    input.open(inputFileName);
    if (!input.is_open()) {
        cout << "File not found." << endl;
        return 1;
    }

    int *data = new int[MAX_SIZE];
    int count = 0;
    while (input >> data[count]) {
        count += 1;
    }
    input.close();

    ofstream output;
    output.open(outputFileName);
    for (int i = count - 1; i >= 0; i--) {
        output << data[i] << " ";
    }
    output.close();

    delete [] data;
    return 0;
}