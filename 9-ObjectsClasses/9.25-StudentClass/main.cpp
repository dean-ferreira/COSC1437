/*

(1) Define a class named Student that has three private member: string firstName, string lastName, int studentID

(2) Declare two constructors:

A default constructor that sets the firstName and lastName as empty strings and studentID as 0
An overloaded constructor that takes three parameters as input (i.e., string inputFirstName, string inputLastName, int inputID) and assign their values to the respective member variables.
(3) Declare the required mutator and accessor methods/functions (get/set methods) in the public section to display or modify the objects. In particular, your class should include the following functions (their names should indicate their functionality):

setFirstName(string)
setLastName(string)
setStudentID(int)
getFirstName()
getLastName()
getStudentID()
Provide the above class declaration in the "StudentClass.h" file. In the "StudentClass.cpp" file, provide the implementation of the above member functions.

In the main function do the following

(1) Create a student object "student1".

(2) Use set methods to assign

StudentID: 6337130
firstName: Sandy
lastName: Santos
(3) Display the student's detail using its get functions on screen (i.e., using cout <<). The output should be as follows

Sandy Santos 6337130
*/

#include <iostream>
#include "StudentClass.h"

using namespace std;

int main() {
    /* create a student object using the overloaded  constructor */
    Student student1("Sandy", "Santos", 6337130);
    /* print out the student information using the individual access functions */
    cout << student1.getFirstName() << " " << student1.getLastName() << " " << student1.getStudentID() << endl;
    return 0;
}