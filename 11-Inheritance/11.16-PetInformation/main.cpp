/*

The base class Pet has private data members petName, and petAge. The derived class Dog extends the Pet class and includes a private data member for dogBreed.

Complete the Dog class to add two constructors

a default constructor that will call the default constructor of the Pet class, then set the dogBreed as "Unknown"
an overloaded constructor that takes three parameters in the order of (string _name, int _age, string _breed). It will then call the two parameter constructor of the Pet class by passing the first two parameters it receives and set the value of dogBreed based on _breed.
Complete main() to:

create a generic pet and print information using PrintInfo().
create a Dog pet, use PrintInfo() to print information, and add a statement to print the dog's breed using the GetBreed() function.
*/

#include <iostream>
#include <string>

#include "Dog.h"

using namespace std;

int main() {
    string genericName {}, dogName {};
    int genericAge {}, dogAge {};
    string dogBreed {};

    getline(cin, genericName);
    cin >> genericAge;
    cin.ignore();

    getline(cin, dogName);
    cin >> dogAge;
    cin.ignore();
    getline(cin, dogBreed);

    Pet genericPet(genericName, genericAge);
    Dog dogPet(dogName, dogAge, dogBreed);

    genericPet.PrintInfo();
    dogPet.PrintInfo();
    return 0;
}