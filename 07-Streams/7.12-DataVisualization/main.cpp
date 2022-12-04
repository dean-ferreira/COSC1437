#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
//FIXME: stringstream library
//FIXME: stream manipulation library

using namespace std;

struct AuthorData {
    string name {};
    int numNovels {};
};

int main() {
    string title {};
    cout << "Enter a title for the data:" << endl;
    getline(cin, title);
    cout << "You entered: " << title << endl;
    cout << endl;
    string h1 {}, h2 {};
    cout << "Enter the column 1 header:" << endl;
    getline(cin, h1);
    cout << "You entered: " << h1 << endl;
    cout << endl;
    cout << "Enter the column 2 header:" << endl;
    getline(cin, h2);
    cout << "You entered: " << h2 << endl;
    cout << endl;
    cout << "Enter a data point (-1 to stop input):" << endl;
    vector<AuthorData> dataCollection;
    string userInput {}, intVal {};
    int commaIndex {};
    AuthorData loader;
    getline(cin, userInput);
    while (userInput != "-1") {
        int commaCount {};
        for (unsigned int i = 0; i < userInput.length(); i++) {
            if (userInput.at(i) == ',') {
                commaCount += 1;
                commaIndex = i;
            }
        }
        if (commaCount == 0) {
            cout << "Error: No comma in string." << endl;
            cout << endl;
        }
        else if (commaCount > 1) {
            cout << "Error: Too many commas in input." << endl;
            cout << endl;
        }
        else if (commaCount == 1) {
            bool foundNaN = false;
            loader.name = userInput.substr(0, commaIndex);
            intVal = userInput.substr(commaIndex + 2, userInput.length());
            for (unsigned int i = 0; i < intVal.length(); i++) {
                if (!isdigit(intVal.at(i))) {
                    cout << "Error: Comma not followed by an integer." << endl;
                    cout << endl;
                    foundNaN = true;
                    break;
                }
            }
            if (!foundNaN) {
                loader.numNovels = stoi(intVal);
                cout << "Data string: " << loader.name << endl;
                cout << "Data integer: " << loader.numNovels << endl;
                cout << endl;
                dataCollection.push_back(loader);
            }
        }
        cout << "Enter a data point (-1 to stop input):" << endl;
        getline(cin, userInput);
    }
    cout << endl;
    cout << setw(33) << right << title << endl;
    cout << setw(20) << left << h1 << "|";
    cout << setw(23) << right << h2 << endl;
    cout << setfill('-') << setw(44) << "" << endl;
    cout << setfill(' ');
    for (unsigned int i = 0; i < dataCollection.size(); i++) {
        cout << setw(20) << left << dataCollection.at(i).name << "|";
        cout << setw(23) << right << dataCollection.at(i).numNovels << endl;
    }
    cout << endl;

    for (unsigned int i = 0; i < dataCollection.size(); i++) {
        cout << setw(20) << right << dataCollection.at(i).name << " ";
        for (int j = 0; j < dataCollection.at(i).numNovels; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}