#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string fileName {};
    cin >> fileName;

    ifstream input;
    input.open(fileName);

    if (!input.is_open()) {
        cout << "Input file not found!" << endl;
        return 1;
    }

    ofstream output;
    output.open("numbered.txt");

    string line {};
    int lineCount = 1;
    getline(input, line);
    while (!input.fail()) {
        cout << lineCount << " " << line << endl;
        output << lineCount << " " << line << endl;
        lineCount += 1;
        getline(input, line);
    }

    input.close();
    output.close();

    return 0;
}