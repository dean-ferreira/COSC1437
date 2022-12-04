#pragma once

#include "Shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape {
protected:
    float radius;

public:
    Circle(float xCor = 0, float yCor = 0, float _radius = 0);
    float getRadius();
    void setRadius(float _r);
    void compArea() override;
    void printArea() override;
    virtual float getHeight() const { return 0.0; }
};

#endif