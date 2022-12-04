#ifndef SQUARE_H
#define SQUARE_H

#include "Figure.h"

class Square : public Figure {
private:
    double size;

public:
    Square(double x=0, double y=0, double s=0);
    void vertices();
    void draw() override;
};

Square::Square(double x, double y, double s) : Figure(x, y), size(s) {}

void Square::vertices() {
    cout << "The vertices of the square are: " << endl;
    float xMin = location().X() - size/2;
    float xMax = location().X() + size/2;
    float yMin = location().Y() - size/2;
    float yMax = location().Y() + size/2;

    Point topLeftCorner(xMin, yMax);
    Point bottomLeftCorter(xMin, yMin);
    Point topRightCorner(xMax, yMax);
    Point bottomRightCorner(xMax, yMin);

    topLeftCorner.print();
    cout << "  ";
    topRightCorner.print();
    cout << "  " << endl;
    bottomLeftCorter.print();
    cout << "  ";
    bottomRightCorner.print();
    cout << "  " << endl;
}

void Square::draw() {
    cout << "A square with center ";
    location().print();
    cout << endl << " side length " << size << endl;
}

#endif