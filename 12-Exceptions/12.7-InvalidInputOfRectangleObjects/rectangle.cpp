#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle()
{
   length = 1;
   width = 1;
}
   
Rectangle::Rectangle(double l, double w) 
{
   if(l <= 0)
      throw InvalidSideException(false);
      
   if(w <= 0)
         throw InvalidSideException();
         
   width = w;
   length = l;
}

void Rectangle::setLength(double l) 
{
   if(l <= 0)
      throw InvalidSideException(false);
      
   length = l; 
}
void Rectangle::setWidth(double w) 
{ 
   if(w <= 0)
         throw InvalidSideException();
         
   width = w; 
}

double Rectangle::getLength() { return length; }
double Rectangle::getWidth() { return width; }
double Rectangle::getArea() { return width*length; };
double Rectangle::getPerimeter() { return 2*(width+length); };
