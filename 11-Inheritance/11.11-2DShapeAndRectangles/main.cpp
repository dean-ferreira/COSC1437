/*
Given the Shape2D class (see the provided Shape2D.h), implement a derived class, named Rectangle with the following additional members:

two private member variables, width and height (both are float)
the corresponding accessors and mutators to access and modify the above two private member variables
float getWidth();
float getHeight();
void setWidth(float );
void setHeight(float );
a public function to compute and the area of a rectangle and set the area to the variable area inherited from Shape2D
void compArea();
Implement the above Rectangle class correctly to pass the unit tests. Also, please fix the provided main() function so that it can compile and run properly.
*/

#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
   Shape2D *p_shape1 = new Shape2D();
   Rectangle rec1 (1.0, 2.5, 45.5, 36.6);
   
   
   p_shape1->setCenter(2, 2);
   
   // fix the following
   cout << "The center of shape 1 is (" << p_shape1->getCenter_x() << ", " << p_shape1->getCenter_y()
        <<"), and its area is " << p_shape1->getArea() << "." << endl;
        
   rec1.setCenter(0, 0);
   rec1.setWidth(2.0);
   rec1.setHeight(3.0);
   rec1.compArea();
   
   cout << "The center of shape 2 is (" << rec1.getCenter_x() << ", " << rec1.getCenter_y()
        <<"), and its area is " << rec1.getArea() << "." << endl;
    
   return 0;
}
