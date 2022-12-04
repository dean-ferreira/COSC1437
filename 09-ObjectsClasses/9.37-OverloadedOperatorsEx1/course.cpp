#include "course.h"

//default constructor
course::course()
{
   numStudents = 0;
   studentNames = nullptr;
}

//overloaded constructor
course::course(int nums, string *names)
{
   numStudents = nums;
   if (nums == 0) {
      studentNames = nullptr;
      return;
   }
   
   studentNames = new string[nums];
   
   for (int i=0; i<nums; i++)
      studentNames[i] = names[i];
}

//accessors
int course::getNumStudents() { return numStudents; }

string* course::getStudentNames() { return studentNames; }

void course::print() const
{
   cout << numStudents << " students: ";
   for (int i=0; i<numStudents; i++)
   {
      cout << studentNames[i];
      if (i<numStudents-1)
         cout << ", ";
   }
   cout << endl;
}

//mutators
void course::setNumStudents(int nums) { numStudents = nums;}

void course::setStudentNames(string *names, int nums)
{
   if (studentNames != nullptr) {
      delete [] studentNames;
      studentNames = nullptr;
   }
   
   studentNames = new string[nums];
   
   for (int i=0; i<nums; i++)
      studentNames[i] = names[i];
}


// implement the copy constructor below
course::course(const course &c) {
   
   numStudents = c.numStudents;
   if (numStudents == 0) {
      studentNames = nullptr;
   }
   else {
      studentNames = new string[numStudents];
      for (int i = 0; i < numStudents; i++) {
         studentNames[i] = c.studentNames[i];
      }
   }
}


// implement the destructor
course::~course() {
   delete[] studentNames;
   studentNames = nullptr;
}


// implement the overloaded + operator
course course::operator+ (const course &c) {
   course result;
   result.numStudents = numStudents + c.numStudents;
   result.studentNames = new string[result.numStudents];
   for (int i = 0; i < numStudents; i++) {
      result.studentNames[i] = studentNames[i];
   }
   for (int i = 0; i < numStudents; i++) {
      result.studentNames[i + numStudents] = c.studentNames[i];
   }
   
   return result;
}


// implement the overloaded = operator
void course::operator= (const course &c) {
   if (this == &c) {
      return;
   }
   
   numStudents = c.numStudents;
   if (studentNames != nullptr) {
      delete[] studentNames;
      studentNames = nullptr;
   }
   
   studentNames = new string[numStudents];
   for (int i = 0; i < numStudents; i++) {
      studentNames[i] = c.studentNames[i];
   }
}