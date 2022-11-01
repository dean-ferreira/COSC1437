#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iomanip>

#define MAX_SIZE 10

using namespace std;

struct studentInfo {
    string fullName;
    string major;
    int ID;
    float avgGPA;
};

void PrintMenu();
void PrintStudents(studentInfo arr[], int n);
void BubbleSortID(studentInfo arr[], int n);
void BubbleSortGPA(studentInfo arr[], int n);

int main() {
    string inputFileName {};
    cin >> inputFileName;

    ifstream input;
    input.open(inputFileName);
    if (!input.is_open()) {
        cout << "Input file not found!" << endl;
        return 1;
    }

    studentInfo *data = new studentInfo [MAX_SIZE];
    int numStudents = 0;
    string line {};
    studentInfo loader;
    getline(input, line);
    while (!input.fail()) {
        // line.erase(remove(line.begin(), line.end(), ','), line.end());
        for (unsigned int i = 0; i < line.length(); i++) {
            if (line.at(i) == ',') {
                line.replace(i, 2, "\n");
            }
        }
        // cout << line << endl;
        stringstream lineStream(line);
        getline(lineStream, loader.fullName);
        getline(lineStream, loader.major);
        lineStream >> loader.ID;
        lineStream >> loader.avgGPA;
        lineStream.ignore();
        data[numStudents] = loader;
        numStudents += 1;
        getline(input, line);
    }
    input.close();
    
    int choice {};
    PrintMenu();
    cin >> choice;
    if (choice == 1) {
        PrintStudents(data, numStudents);
    }
    else if (choice == 2) {
        BubbleSortID(data, numStudents);
        PrintStudents(data, numStudents);
    }
    else if (choice == 3) {
        BubbleSortGPA(data, numStudents);
        PrintStudents(data, numStudents);
    }
    delete [] data;
    return 0;
}

void PrintMenu() {
    cout << "1 - print all student information" << endl;
    cout << "2 - sort students based on their IDs and print" << endl;
    cout << "3 - sort students based on their average GPAs and print" << endl;
}

void PrintStudents(studentInfo arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i].fullName << ", " << arr[i].major << ", " << arr[i].ID << ", " << arr[i].avgGPA << endl;
    }
}

void BubbleSortID(studentInfo arr[], int n) {
    int i, j;
    studentInfo temp;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            // Comparing consecutive data and switching balues if value at j > j+1.
            if (arr[j].ID > arr[j+1].ID) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void BubbleSortGPA(studentInfo arr[], int n) {
    int i, j;
    studentInfo temp;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            // Comparing consecutive data and switching balues if value at j > j+1.
            if (arr[j].avgGPA < arr[j+1].avgGPA) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}