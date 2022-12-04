/*
Given the following class Point (you can also download the Point.h file where Point class is defined)

#include <iostream>
using namespace std;

// a Point class to represent one 2D point
class Point
{
public:
    Point(double i=0, double j=0) : x(i), y(j) { }

    void print( ) const  { 
        cout << "(" << x << ", " << y << ")" << endl; 
    }

    void set_coord(double x, double y)  {
        this->x = x;
        this->y = y;
    }

private:
    double x, y;
};
Define an abstract class Figure that contains

A private variable center that is an object of Point
A constructor with two parameters with default values that can be used to initialize the x and y coordinates of the center
An accessor, Point location(), that returns the object center
A mutator, void move(Point ), that sets the new center. This function will call a draw() function described next
A pure virtual function, void draw()
Define a concrete class Circle that is a descendant of Figure (using public inheritance) that contains

A private variable, double radius
A constructor that takes three parameters (double, double, double) as input, where the first two correspond to the x and y coordinates of the center and the third parameter sets the radius of the circle. This constructor should call the Figure constructor to properly initialize the center object.
A draw() function that outputs the following information of the circle object
A circle with center (<center_x>, <center_y>)
 and radius <radius_of_the_circle>
You can use the following example to implement the draw() function here

        cout << "A circle with center ";
        // call the print function of the Point class to print out the coordinates of the center here!!!
        cout << " and radius " << radius << endl;
Define a concrete class Square that is a descendant of Figure (using public inheritance) that contains

A private variables of double type, side
A constructor that takes three parameters (double, double, double) as input, where the first two correspond to the x and y coordinates of the center and the third sets the size of the square. This constructor should call the Figure constructor to properly initialize the center object.
A function, named void vertices(), that computes the coordinates of its four corners and outputs the following
The vertices of the square are: 
(upper_left_x, upper_left_right)  (upper_right_x, upper_right_y)
(lower_left_x, lower_left_right)  (lower_right_x, lower_right_y)
The following shows how to compute the coordinates of the lower left corner

lower_left_x = center.x - side/2;
lower_left_y = center.y - side/2;
You can derive the other three corners similarly.

A draw() function that outputs the following
A square with center (<center_x>, <center_y>)
 and side length <side>
Implement the above three classes (Point class is given) and make sure the following main function will work

int main( )
{
    Circle c(1, 2, 3);
    Square s(4, 5, 6);
    Figure *f = &c, &g = s;

    f -> draw( );
    f -> move(Point(2, 2));

    g.draw( );

    s.vertices( );

    return 0;
}
The expected output of the above main function is

A circle with center (1, 2) 
 and radius 3 
A circle with center (2, 2) 
 and radius 3 
A square with center (4, 5) 
 side length 6 
A square with center (1, 1) 
 side length 6 
The vertices of the square are: 
(-2, 4) (4, 4) 
(-2, -2) (4, -2)
*/

#include <iostream>

using namespace std;

#include "Figure.h"
#include "Circle.h"
#include "Square.h"

int main( )
{
    Circle c(1, 2, 3);
    Square s(4, 5, 6);
    Figure *f = &c, &g = s;

    f->draw( );
    f->move(Point(2, 2));

    g.draw( );

    s.vertices( );

    return 0;
}