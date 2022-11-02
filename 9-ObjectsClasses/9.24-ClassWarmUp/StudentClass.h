#ifndef STUDENTCLASS_H
#define STUDENTCLASS_H

#include <string>

class Student {
private:
    std::string firstName;
    std::string lastName;
    int studentID;

public:
    void setFirstName(std::string);
    void setLastName(std::string);
    void setStudentID(int);
    std::string getFirstName();
    std::string getLastName();
    int getStudentID();
};

#endif