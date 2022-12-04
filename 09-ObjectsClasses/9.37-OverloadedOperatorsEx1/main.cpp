/*
Given the following class

class course
{
public:
      //constructors
      //accessors
      //mutators
private:
      int numStudents;
      string *studentNames;
};
Define a copy constructor that handles the deep copy of the member studentNames
Define a destructor that releases the memory allocated for studentNames
Implement the following overloaded operators
Overload the '+' operator so that it can be used to perform the addition of two course objects, e.g., course newCourse = course1 + course 2;. After this addition, the two studentNames lists of the two objects are merged into one and the numStudents of the newCourse is the sum of the two numStudents of the two objects.
Overload the '=' operator so that when newCourse = oldCourse; is called, it does the deep copy

*/

#include "course.h"

int main()
{
   string names1[2]={"test1", "test2"};
   course c1(2, names1);
   c1.print();
   return 0;
}