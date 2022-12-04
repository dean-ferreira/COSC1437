#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
using namespace std;

class Rectangle: public Shape{
public:
  Rectangle(int b, int h);
  void setBase(int b);
  void setHeight(int h);
  int getBase();
  int getHeight();
  void setCenter(float x, float y);
  void draw();

private:
  int base;
  int height;
};

#endif