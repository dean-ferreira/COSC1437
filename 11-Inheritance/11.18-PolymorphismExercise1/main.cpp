/*
Implement the following two classes so that the program produces the expected output.

Pet
The class should contain the following:

A private string variable, called name
A default constructor that sets name as empty
An overloaded constructor with one string variable that sets name as the value passed in
An accessor, getName(), that returns the value of name
A mutator, setName(string), that sets the value of name
A print() function with empty argument list that outputs the name of the pet in the following format
Name: <the value stored in *name*>
Dog
Define Dog from Pet using public inheritance. The class should contain the following:

A private string variable, called breed
A default constructor that calls the default constructor of Pet and sets breed as empty
An overloaded constructor with two string variables that calls the overloaded constructor of Pet and set breed as the value passed in
An accessor, getBreed(), that returns the value of breed
A mutator, setBreed(string), that sets the value of breed
A print() function with empty argument list that outputs the name and breed of the dog in the following format
Name: <the value stored in *name*>
Breed: <the value stored in *breed*>
Implement the above two classes correctly so that the following main() function will generate the expected output as shown in the end.

int main()
{
   Dog vdog;
   Pet vpet;
   vdog.setName("Tiny");
   vdog.setBreed("Great Dane");
   vpet = vdog;
   vpet.print();

   Pet *ppet;
   Dog *pdog;
   pdog = new Dog;
   pdog->setName("Tiny");
   pdog->setBreed("Great Dane");
   ppet = pdog;
   ppet->print();
   pdog->print();
   return 0;
}
The expected output is

Name: Tiny 
Name: Tiny 
Breed: Great Dane 
Name: Tiny 
Breed: Great Dane
*/

#include <string>
#include <iostream>
using namespace std;

#include "Pet.h"
#include "Dog.h"

int main()
{
   Dog vdog;
   Pet vpet;
   vdog.setName("Tiny");
   vdog.setBreed("Great Dane");
   vpet = vdog;
   vpet.print();
   
   Pet *ppet;
   Dog *pdog;
   pdog = new Dog;
   pdog->setName("Tiny");
   pdog->setBreed("Great Dane");
   ppet = pdog;
   ppet->print();
   pdog->print();
   return 0;
}