#include <iostream>
using namespace std;

//Declare student struct below
struct student {
   string name;
   string ID;
   string major;
   double avg_GPA;
};

void CreateStudent(student &newStudent);

void PrintStudent(const student &st);

void changeMajor(student& aStudent, string newMajor);

student highestGPA(student theStudents[], int size);

int main() {
    student newStudent;
    CreateStudent(newStudent);
    cout << "Student summary: " << endl;
    PrintStudent(newStudent);

    changeMajor(newStudent, "Mechanical engineering");
    cout << "Student summary: " << endl;
    PrintStudent(newStudent);

    student theStudents [3];
    for (int i = 0; i < 3; i++) {
        CreateStudent(theStudents[i]);
    }
    cout << "Student group summary: " << endl;
    for (int i = 0; i < 3; i++) {
        PrintStudent(theStudents[i]);
    }
    student bestStudent = highestGPA(theStudents, 3);
    cout << "Best student: " << endl;
    PrintStudent(bestStudent);
    return 0;
}

void CreateStudent(student &newStudent) {
    cout << "Enter student name: ";
    getline(cin, newStudent.name); //Get name

    cout << "Enter student ID: ";
    getline(cin, newStudent.ID); //Get ID
    
    cout << "Enter student major: ";
    getline(cin, newStudent.major); //Get major
    
    cout << "Enter student GPA: ";
    cin >> newStudent.avg_GPA; //Get GPA
    cin.ignore();
}

void PrintStudent(const student &st) {
   cout << st.name  << ", ID: " << st.ID << ", " << st.major << ", GPA: " << st.avg_GPA << endl;
}

void changeMajor(student& aStudent, string newMajor) {
   aStudent.major = newMajor;
}

student highestGPA(student theStudents[], int size) {
    int bestIndex = 0;
    for (int i = 0; i < size; i++) {
        if (theStudents[i].avg_GPA > theStudents[bestIndex].avg_GPA) {
            bestIndex = i;
        }
    }
    return theStudents[bestIndex];
}