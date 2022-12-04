#include <iostream>
#include <cstring>
using namespace std;

#ifndef course_h
#define course_h

class course
{
public:
      course();
      course(int, string*);
      
      //declare the copy constructor below
      course(const course &c);
      
      //declare the destructor below
      ~course();
      
      //accessors
      int getNumStudents();
      string *getStudentNames();
      void print() const;
      
      //mutators
      void setNumStudents(int);
      void setStudentNames(string *, int);
      
      //declare the overloaded + operator below
      course operator+ (const course &c);
      
      //declare the overloade = operator below
      void operator= (const course &c);
      
private:
      int numStudents;
      string *studentNames;
};

#endif /* course_h */