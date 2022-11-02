#ifndef STUDENTCLASS_H
#define STUDENTCLASS_H

#include <string>

using namespace std;

class Student {
private:
    string firstName;
    string lastName;
    int studentID;

public:
    Student();
    Student(string _firstName, string _lastName, int _studentID);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setStudentID(int);
    std::string getFirstName();
    std::string getLastName();
    int getStudentID();
};

#endif