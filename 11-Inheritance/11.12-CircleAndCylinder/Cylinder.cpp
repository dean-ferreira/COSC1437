#include "Cylinder.h"

Cylinder::Cylinder(float xCor, float yCor, float _radius, float _height) : Circle(xCor, yCor, _radius), height(_height) {
}

void Cylinder::setHeight(float _h) {
    height = _h;
}

float Cylinder::getHeight() const {
    return height;
}

void Cylinder::compArea() {
    float calculatedArea = (2 * (3.14) * this->getHeight() * this->getRadius());
    calculatedArea += (2 * (3.14) * this->getRadius() * this->getRadius());
    setArea(calculatedArea);
}

void Cylinder::printArea() {
    cout << fixed << setprecision(2);
    cout << "The area of the cylinder is " << getArea() << endl;
}