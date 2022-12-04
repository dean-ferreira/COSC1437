// header of Dog class
#pragma once

#ifndef DOG_H
#define DOG_H

#include "Pet.h"

//Provide the definition of the Dog class below
class Dog : public Pet {
private:
    string breed;

public:
    Dog();
    Dog(string, string);
    string getBreed();
    void setBreed(string);
    void print() override;
};

Dog::Dog() : Pet(), breed("") {
}

Dog::Dog(string b, string n) : Pet(n), breed(b) {
}

string Dog::getBreed() {
    return breed;
}

void Dog::setBreed(string b) {
    breed = b;
}

void Dog::print() {
    Pet::print();
    cout << "Breed: " << getBreed() << endl;
}
#endif //DOG_H