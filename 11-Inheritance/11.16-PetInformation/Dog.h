#ifndef DOGH
#define DOGH

#include <string>
#include "Pet.h"

class Dog : public Pet
{
private:
    string dogBreed;

public:
    // TODO: declare a default constructor
    Dog();

    // TODO: declare an overloaded constructor
    Dog(string _name, int _age, string _breed);

    void SetBreed(string userBreed);

    string GetBreed();

    void PrintInfo();
};

#endif