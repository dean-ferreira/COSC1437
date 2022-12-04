#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(int b, int h) : Shape(), base(b), height(h) {

}

void Rectangle::setBase(int b){
   base = b;
}

void Rectangle::setHeight(int h){
  height = h;
}

int Rectangle::getBase(){
  return base;
}

int Rectangle::getHeight(){
  return height;
}

void Rectangle::setCenter(float x, float y) {
  Shape::setX(x);
  Shape::setY(y);
  cout << "Rectangle moved to [" << getX() << ", " << getY() << "]" << endl;
}

void Rectangle::draw() {
  cout << "Drawing Rectangle at [" << getX() <<", " << getY() << "]" << endl;
  for (int i = 1; i <= getHeight(); i++) {
    for (int j = 1; j <= getBase(); j++) {
      cout << "*";
    }
    cout << endl;
  }
}