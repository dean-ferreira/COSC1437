// include the StudentClass.h headerfile
#include "StudentClass.h"

// accessors to the private member variables
std::string Student::getFirstName() {
    return firstName;
}

std::string Student::getLastName() {
    return lastName;
}
int Student::getStudentID() {
    return studentID;
}

// mutators to the private member variables
void Student::setFirstName(std::string _firstName) {
    firstName = _firstName;
}

void Student::setLastName(std::string _lastName) {
    lastName = _lastName;
}

void Student::setStudentID(int _studentID) {
    studentID = _studentID;
}