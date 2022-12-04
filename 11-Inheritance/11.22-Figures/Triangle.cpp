#include <iostream>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(int s) : Shape(), side(s){
}

void Triangle::setSide(int s){
  side = s;
}

int Triangle::getSide(){
  return side;
}

void Triangle::setCenter(float x, float y) {
  Shape::setX(x);
  Shape::setY(y);
  cout << "Triangle moved to [" << getX() << ", " << getY() << "]" << endl;
}

void Triangle::draw() {
  cout << "Drawing Triangle at [" << getX() <<", " << getY() << "]" << endl;
  for (int i = 1; i <= getSide(); i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}