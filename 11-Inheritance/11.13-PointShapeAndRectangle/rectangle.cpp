#include <iostream>
#include "rectangle.h"

//Add default constructor to set center coordinates to (0,0) and set width and length to 1
Rectangle::Rectangle() : Shape(), length(1), width(1) {}

//Add constructor with parameters (Point, double, double)
Rectangle::Rectangle(Point _p, double _l, double _w) : Shape(_p), length(_l), width(_w) {}

//Add overloaded operator +
Rectangle Rectangle::operator+(Rectangle &other) {
   double combinedLength = this->getLength() + other.getLength();
   double combinedWidth = this->getWidth() + other.getWidth();

   Rectangle combinedRectangle;
   combinedRectangle.setLength(combinedLength);
   combinedRectangle.setWidth(combinedWidth);
   return combinedRectangle;
}

double Rectangle::getArea() 
{ 
   //FIX ME: compute area using private helper updateArea() and return area;
   updateArea();
   return area;
}

double Rectangle::getPerimeter() 
{ 
   //FIX ME: compute perimeter using private helper updateArea() and return perimeter;
   updatePerimeter();
   return perimeter;
}

//DO NOT CHANGE CODE BELOW
void Rectangle::updateArea()
{
   area = width * length;
}

void Rectangle::updatePerimeter()
{
   perimeter = 2 * (width + length);
}
   
void Rectangle::setLength(double l) { length = l; }
void Rectangle::setWidth(double w) { width = w; }

double Rectangle::getLength() { return length; }
double Rectangle::getWidth() { return width; }



