#include "OfferedCourse.h"

// TODO: Define mutator functions -
//      SetInstructorName(), SetTerm(), SetClassTime()
void OfferedCourse::SetInstructorName(string _name) {
    instructorName = _name;
}

void OfferedCourse::SetTerm(string _term) {
    term = _term;
}

void OfferedCourse::SetClassTime(string _time) {
    classTime = _time;
}

// TODO: Define accessor functions -
//      GetInstructorName(), GetTerm(), GetClassTime()
string OfferedCourse::GetInstructorName() {
    return instructorName;
}

string OfferedCourse::GetTerm() {
    return term;
}

string OfferedCourse::GetClassTime() {
    return classTime;
}