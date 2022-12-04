/*
Given the Shape class (see the provided Shape.h), implement a derived class:

Circle
with the following additional members:

one protected member variable, radius (float)

the corresponding accessor and mutator to access and modify the above protected member radius (already given)

the constructor that takes three parameters as input with the order of the x and y coordinates of the center and the radius of the circle. The constructor should call the constructor of Shape to properly initialize the center coordinates.

a public function to compute and the area of a circle and set the area to the variable area inherited from Shape

void compArea(); // assume area = 3.14 * radius * radius;
override the function printArea() from the Shape to output the following The area of the circle is <the computed area>. use << fixed << setprecision(2)

From the above Circle class, derive a new class:

Cylinder
with the following additional members

one private member variable, height (float)

the corresponding accessor and mutator to access and modify the above private member height (already given)

the constructor that takes four parameters as input with the order of the x and y coordinates of the center, the radius of the base circle, and the height of the cylinder. The constructor should call the constructor of Circle to properly initialize the center coordinates and the radius of the base circle.

override the function void compArea() from the Circle class to compute the area of the cylinder using the following formula area = 2*(3.14)*height*radius + 2*(3.14)*radius*radius;

override the function printArea() to output the following

     The area of the cylinder is <the computed area>.
*/

#include <iostream>

using namespace std;

#include "Cylinder.h"

int main()
{
    Shape s2d;
    s2d.printArea();

    Circle circ(3.4, -1, 3.0);

    cout << "The center of the circle is: (" << circ.getCenter_x() << ", " << circ.getCenter_y() << ")." << endl;
    circ.compArea();
    circ.printArea();
    Circle *cyl = new Cylinder(5, 6, 7, 8);
    cyl->compArea();
    cyl->printArea();
    return 0;
}