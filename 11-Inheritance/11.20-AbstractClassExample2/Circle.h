#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double x=0, double y=0, double r=0);
    void draw() override;
};

Circle::Circle(double x, double y, double r) : Figure(x, y), radius(r) {}

void Circle::draw() {
    cout << "A circle with center ";
    location().print();
    cout << endl << " and radius " << radius << endl;
}

#endif