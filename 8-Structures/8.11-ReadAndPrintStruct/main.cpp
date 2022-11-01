#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

struct Student {
    int id;
    string name;
    float GPA;
};

void ReadStudentInfo(ifstream &ifs, Student array[], int &nStudents);

int main() {
    int numStudents {};
    Student theStudents [10];
    string fileName {};
    cin >>  fileName;

    ifstream inFS;
    inFS.open(fileName);

    if (!inFS.is_open()) {
        cout << "File not found" << endl;
        return 1; // 1 indicates error
    }

    ReadStudentInfo(inFS, theStudents, numStudents);
    inFS.close();

    for (int i = numStudents - 1; i >= 0; i--) {
        if (theStudents[i].GPA > 3.0) {
            cout << theStudents[i].name << endl;
        }
    }

    return 0;
}

void ReadStudentInfo(ifstream &ifs, Student array[], int &nStudents) {
    nStudents = 0;
    string studentInfo {};
    getline(ifs, studentInfo);
    while (!ifs.fail()) {
        stringstream infoStream(studentInfo);
        string idInfo {};
        string nameInfo {};
        string gpaInfo {};
        infoStream >> idInfo >> nameInfo >> gpaInfo;
        array[nStudents].id = stoi(idInfo.substr(3, idInfo.size()));
        array[nStudents].name = nameInfo.substr(5, nameInfo.size());
        gpaInfo = gpaInfo.substr(4, gpaInfo.size());
        array[nStudents].GPA = stof(gpaInfo);
        nStudents += 1;
        getline(ifs, studentInfo);
    }
}