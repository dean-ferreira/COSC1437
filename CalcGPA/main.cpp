#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct Course {
    int credit {};
    string letterGrade {};
};

int main() {
    string gradeFile = "grades.txt";

    ifstream input;
    input.open(gradeFile);

    if (!input.is_open()) {
        cout << "File not found" << endl;
        return 1;
    }

    vector<Course> transcript;
    Course loader;
    input >> loader.credit;
    input >> loader.letterGrade;
    while (!input.fail()) {
        transcript.push_back(loader);
        input >> loader.credit;
        input >> loader.letterGrade;
    }

    input.close();

    int totalCredits {};
    double totalGradePoints {};
    double gradePoints {};
    for (unsigned int i = 0; i < transcript.size(); i++) {
        totalCredits += transcript.at(i).credit;
        if (transcript.at(i).letterGrade == "A") {
            gradePoints = 4.0;
        }
        else if (transcript.at(i).letterGrade == "A-") {
            gradePoints = 3.67;
        }
        else if (transcript.at(i).letterGrade == "B+") {
            gradePoints = 3.33;
        }
        else if (transcript.at(i).letterGrade == "B") {
            gradePoints = 3.0;
        }
        else if (transcript.at(i).letterGrade == "B-") {
            gradePoints = 2.67;
        }
        else if (transcript.at(i).letterGrade == "C+") {
            gradePoints = 2.33;
        }
        else if (transcript.at(i).letterGrade == "C") {
            gradePoints = 2.0;
        }
        else if (transcript.at(i).letterGrade == "C-") {
            gradePoints = 1.67;
        }
        else if (transcript.at(i).letterGrade == "D+") {
            gradePoints = 1.33;
        }
        else if (transcript.at(i).letterGrade == "D") {
            gradePoints = 1.0;
        }
        else if (transcript.at(i).letterGrade == "D-") {
            gradePoints = 0.67;
        }
        else if (transcript.at(i).letterGrade == "F") {
            gradePoints = 0.00;
        }
        totalGradePoints += (transcript.at(i).credit * gradePoints);
    }

    cout << totalGradePoints / totalCredits << endl;
}
