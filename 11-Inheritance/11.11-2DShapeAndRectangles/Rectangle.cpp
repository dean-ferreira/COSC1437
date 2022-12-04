//Include the header that contains the Rectangle class declaration
#include "Rectangle.h"

//Provide the implementation of the member functions of the Rectangle class below
Rectangle::Rectangle() {
    this->setWidth(1);
    this->setHeight(1);
    this->setCenter(1, 1);
}

Rectangle::Rectangle(float _x, float _y, float _width, float _height) {
    this->setWidth(_width);
    this->setHeight(_height);
    this->setCenter(_x, _y);
}

void Rectangle::compArea() {
    this->setArea(this->width * this->height);
}