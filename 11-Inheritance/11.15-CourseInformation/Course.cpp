#include "Course.h"

// TODO: Define mutator functions -
//       SetCourseNumber(), SetCourseTitle()
void Course::SetCourseNumber(string _s) {
    courseNumber = _s;
}

void Course::SetCourseTitle(string _t) {
    courseTitle = _t;
}

// TODO: Define accessor functions -
//       GetCourseNumber(), GetCourseTitle()
string Course::GetCourseNumber() {
    return courseNumber;
}

string Course::GetCourseTitle() {
    return courseTitle;
}

// TODO: Define PrintInfo()
void Course::PrintInfo() {
    cout << "Course Information: " << endl;
    cout << "   Course Number: " << GetCourseNumber() << endl;
    cout << "   Course Title: " << GetCourseTitle() << endl;
}