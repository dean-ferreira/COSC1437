
// Write a program that first takes in a string from user input as the input file name.
// Then reads in the file. For example, when the user input sample.txt, read in the sample.txt file.

// The input file will have this format:

// <number of students>
// <student 1 name>
// <student 1 grade 1> <student 1 grade 2> <student 1 grade 3>
// <sudent 2 name>
// ...
// Sample input:

// 2
// Boby Bill
// 20 30 40
// Anna Ain
// 50 80 100
// There are 2 students, followed by the first student name, then their 3 grades.
// You can safely assume that the number of students in the file is no more than 10.
// The program will then read in the names and calculate the average grade for each student.
// Lastly, write to output.txt the highest and lowest average grade, then the name of each student followed by the grade letter.

// Grade letter is calculated based on the scale:

// 92-100: A
// 80 - 92: B
// 70 - 80: C
// 60 - 70: D
// < 60: F
// The output should look like this:

// Highest grade: 76
// Lowest grade: 30

// Boby Bill: F
// Anna Ain: C
// Hint: Call file.ignore() to make sure the file reader goes to the next line.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Student {
    string firstName {};
    string lastName {};
    int grades [3];
    int sumGrade {};
    int average {};
    char letterGrade {};
};

int main() {
    ifstream inFS; // Input file stream
    ofstream outFS; // Output file stream
    string fileName {};
    cin >> fileName;
    int numStudents {};
    Student students [10];

    int highestGrade = -1;
    int lowestGrade = 101;

    int highestAvg = -1;
    int lowestAvg = 101;

    inFS.open(fileName);
    if (!inFS.is_open()) {
        cout << "Could not open file " << fileName << endl;
        return 1; // 1 indicates error
    }

    inFS >> numStudents; // read in the number of students
    for (int i = 0; i < numStudents; i++) {
        inFS >> students[i].firstName;
        inFS >> students[i].lastName;
        for (int j = 0; j < 3; j++) {
            inFS >> students[i].grades[j];
            students[i].sumGrade += students[i].grades[j];
            if (students[i].grades[j] > highestGrade) {
                highestGrade = students[i].grades[j];
            }
            if (students[i].grades[j] < lowestGrade) {
                lowestGrade = students[i].grades[j];
            }
        }
        students[i].average = students[i].sumGrade / 3;
        if (students[i].average < lowestAvg) {
            lowestAvg = students[i].average;
        }
        if (students[i].average > highestAvg) {
            highestAvg = students[i].average;
        }
        if (students[i].average >= 92 && students[i].average <= 100) {
            students[i].letterGrade = 'A';
        }
        else if (students[i].average >= 80 && students[i].average < 92) {
            students[i].letterGrade = 'B';
        }
        else if (students[i].average >= 70 && students[i].average < 80) {
            students[i].letterGrade = 'C';
        }
        else if (students[i].average >= 60 && students[i].average < 70) {
            students[i].letterGrade = 'D';
        }
        else if (students[i].average < 60) {
            students[i].letterGrade = 'F';
        }
    }

    outFS.open("output.txt");

    outFS << "Highest grade: " << highestAvg << endl;
    outFS << "Lowest grade: " << lowestAvg << endl;
    outFS << endl;
    for (int i = 0; i < numStudents; i++) {
        outFS << students[i].firstName << " " << students[i].lastName << ": " << students[i].letterGrade << endl;
    }

    inFS.close();
    outFS.close();
    return 0;
}