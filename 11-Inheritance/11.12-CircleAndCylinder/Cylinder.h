#pragma once

#include "Circle.h"

#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder : public Circle {
private:
    float height;

public:
    Cylinder(float xCor = 0, float yCor = 0, float _radius = 0, float _height = 0);
    void setHeight(float _h);
    float getHeight() const override;
    void compArea() override;
    void printArea() override;
};

#endif