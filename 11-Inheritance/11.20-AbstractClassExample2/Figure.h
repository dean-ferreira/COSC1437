#ifndef FIGURE_H
#define FIGURE_H

#include "Point.h"

class Figure {
private:
    Point center;

public:
    Figure(double x=0, double y=0);
    Point location();
    void move(Point);
    virtual void draw() = 0;
};

Figure::Figure(double x, double y) : center(x, y) {}

Point Figure::location() {
    return center;
}

void Figure::move(Point p) {
    center = p;
    draw();
}

#endif