#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape()
{
  center_x = 0;
  center_y = 0;
}

void Shape::setX(float x)
{
  center_x = x;
}

void Shape::setY(float y)
{
  center_y = y;
}

float Shape::getX()
{
  return center_x;
}

float Shape::getY()
{
  return center_y;
}

void Shape::setCenter(float x, float y)
{
  setX(x);
  setY(y);
  cout << "Figure moved to [" << getX() << ", " << getY() << "]" << endl;
}

void Shape::draw()
{
  cout << "Drawing Figure at [" << getX() <<", " << getY() << "]" << endl;
}
