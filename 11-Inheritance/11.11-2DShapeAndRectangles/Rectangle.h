#pragma once
// Include the header that contains the Shape2D class
#include "Shape2D.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

// Declare your Rectangle class below
// The definition of the member functions of the Rectangle class should be put in the Rectangle.cpp file
class Rectangle : public Shape2D {
private:
    float width;
    float height;

public:
    Rectangle();
    Rectangle(float _x, float _y, float _width, float _height);
    float getWidth() { return width; }
    float getHeight() { return height; }
    void setWidth(float _width) { width = _width; }
    void setHeight(float _height) { height = _height; }

    void compArea();
};

#endif