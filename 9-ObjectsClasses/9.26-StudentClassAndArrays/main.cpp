/*
Use the Student class you created in the above exercise to finish the following.

In the 'main' function do the following

(1) Create an array of Student objects with three elements.

(2) Initialize the array elements via a for loop with the prompting messages:

Enter student's ID: 
Enter student's first name:
Enter student's last name:
(3) Implement a function, named printAll(), that takes a Student array and its size (int) as input and print out all the students' information in the following format:

Sandy Santos 6337130
George Newman 1387214
Roman Martin 5937319
*/

#include <iostream>
#include "StudentClass.h"

using namespace std;

void printAll(Student students [], int numStudents);

int main() {
    int numStudents {3};
    Student theStudents[numStudents];
    for (int i = 0; i < 3; i++) {
        int studentID {};
        string firstName {}, lastName {};
        cout << "Enter student's ID:" << endl;
        cin >> studentID;
        theStudents[i].setStudentID(studentID);
        cin.ignore();
        cout << "Enter student's first name:" << endl;
        getline(cin, firstName);
        theStudents[i].setFirstName(firstName);
        cout << "Enter student's last name:" << endl;
        getline(cin, lastName);
        theStudents[i].setLastName(lastName);
    }
    cout << endl;
    printAll(theStudents, numStudents);
    return 0;
}

void printAll(Student students [], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].getFirstName() << " " << students[i].getLastName() << " " << students[i].getStudentID() << endl;
    }
}