#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle()
{
   width = 1;
   length = 1;
}
   
Rectangle::Rectangle(double l, double w)
{
   width = w;
   length = l;
}

void Rectangle::setLength(double l) { length = l; }
void Rectangle::setWidth(double w) { width = w; }

double Rectangle::getLength() { return length; }
double Rectangle::getWidth() { return width; }

// FIX ME: provide the implementation of the two overloading operators > and !=
bool Rectangle::operator>(const Rectangle &other) { // you can choose to overload the < operator if needed
    return length * width > other.length * other.width;
}
bool Rectangle::operator!=(const Rectangle &other) {
    return (width != other.width || length != other.length);
}