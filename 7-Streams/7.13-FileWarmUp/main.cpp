#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    string fileName {};
    cin >> fileName;

    ifstream input;
    input.open(fileName);

    if (!input.is_open()) {
        cout << "File not found." << endl;
        return 1;
    }

    vector<string> studentNames;
    string line {};
    getline(input, line);
    while (!input.fail()) {
        studentNames.push_back(line);
        getline(input, line);
    }

    input.close();

    ofstream output;
    output.open("output.txt");
    output << studentNames.at(0) << endl << studentNames.at(studentNames.size() - 1) << endl;
    output << studentNames.size() << endl;
    output.close();

    return 0;
}