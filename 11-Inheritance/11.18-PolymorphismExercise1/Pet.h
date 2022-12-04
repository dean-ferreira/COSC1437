// header of Pet class
#pragma once

#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>
using namespace std;


class Pet{
public:
   Pet();
   Pet(string);
   string getName();
   void setName(string);
   
   //declare the print function to enable polymorphism
   virtual void print();

private:
   string name;
};


// Provide the definition of the member functions of Pet
Pet::Pet() {
   name = "";
}

Pet::Pet(string n) {
   name = n;
}

string Pet::getName() {
   return name;
}

void Pet::setName(string n) {
   name = n;
}

void Pet::print() {
   cout << "Name: " << getName() << endl;
}
#endif //PET_H