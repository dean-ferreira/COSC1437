#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course
{
private:
    // TODO: Declare private data members - courseNumber, courseTitle
    string courseNumber;
    string courseTitle;

public:
    // TODO: Declare mutator functions -
    //       SetCourseNumber(), SetCourseTitle()
    void SetCourseNumber(string);
    void SetCourseTitle(string);

    // TODO: Declare accessor functions -
    //       GetCourseNumber(), GetCourseTitle()
    string GetCourseNumber();
    string GetCourseTitle();

    // TODO: Declare PrintInfo()
    void PrintInfo();
};

#endif
