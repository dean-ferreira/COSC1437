#include "Circle.h"

Circle::Circle(float xCor, float yCor, float _radius) : Shape(xCor, yCor), radius(_radius) {
}

float Circle::getRadius() {
    return radius;
}

void Circle::setRadius(float _r) {
    radius = _r;
}

void Circle::compArea() {
    float calculatedArea = 3.14 * getRadius() * getRadius();
    setArea(calculatedArea);
}

void Circle::printArea() {
    cout << fixed << setprecision(2);
    cout << "The area of the circle is " << getArea() << endl;
}