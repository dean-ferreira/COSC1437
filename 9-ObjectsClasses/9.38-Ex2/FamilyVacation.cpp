#include "FamilyVacation.h"


//Mutators
void FamilyVacation::setNumDays(int dayCount) {
   numDays = dayCount;
}

void FamilyVacation::setNumPeople(int peopleCount) {
   numPeople = peopleCount;
}

void FamilyVacation::setNames(string *who, int people)
{

   if (people == 0) return;
   
   names = new string[people];
   numPeople = people;
   
   for (int i=0; i<people; i++)
       names[i] = who[i];
}


//Accessors
int FamilyVacation::getNumDays() {
   return numDays;
}

int FamilyVacation::getNumPeople(){
   return numPeople;
}

string *FamilyVacation::getNames(){
   return names;
}



// Implement the default constructor
FamilyVacation::FamilyVacation() {
    numDays = 0;
    numPeople = 0;
    names = nullptr;
}

// Implement the overloaded constructors with three parameters, in the order of int, int, *string
FamilyVacation::FamilyVacation(int days, int people, string* _names) {
    numDays = days;
    numPeople = people;
    names = new string[numPeople];
    for (int i = 0; i < numPeople; i++) {
      names[i] = _names[i];
    }
}

// Implement the destructor
FamilyVacation::~FamilyVacation() {
   delete[] names;
}

// Implement the copy constructor that does the deep copy for the 'names' member
FamilyVacation::FamilyVacation(const FamilyVacation &source) {
    numDays = source.numDays;
    numPeople = source.numPeople;
    names = new string[numPeople];
    for (int i = 0; i < numPeople; i++) {
      names[i] = source.names[i];
    }
}

// Implement the overloaded + operator
FamilyVacation FamilyVacation::operator+(FamilyVacation operand) {
   FamilyVacation newVacation;
   newVacation.numDays = this->getNumDays() + operand.getNumDays();
   newVacation.numPeople = this->getNumPeople() + operand.getNumPeople();
   if (newVacation.names != nullptr) {
      delete[] newVacation.names;
      newVacation.names = nullptr;
   }
   newVacation.names = new string [newVacation.getNumPeople()];

   for (int i = 0; i < this->getNumPeople(); i++) {
      newVacation.names[i] = this->names[i];
   }

   for (int i = this->getNumPeople(); i < this->getNumPeople() + operand.getNumPeople(); i++) {
      newVacation.names[i] = operand.names[i - (this->getNumPeople() - operand.getNumPeople()) - 2];
   }

   return newVacation;
}

// Implement the second overloaded + operator
FamilyVacation FamilyVacation::operator+(int value) {
   FamilyVacation newVacation;
   newVacation.numDays = this->getNumDays() + value;
   newVacation.numPeople = this->getNumPeople();
   if (newVacation.names != nullptr) {
      delete[] newVacation.names;
      newVacation.names = nullptr;
   }
   newVacation.names = new string [newVacation.getNumPeople()];
   for (int i = 0; i < newVacation.numPeople; i++) {
      newVacation.names[i] = this->names[i];
   }

   return newVacation;
}

// Implement the overloaded == operator
bool FamilyVacation::operator==(FamilyVacation &operand) {
   return this->getNumDays() == operand.getNumDays() && this->getNumPeople() == operand.getNumPeople() && this->getNames() == operand.getNames();
}

// Implement the overloaded << operator
ostream& operator<<(ostream& os, FamilyVacation operand) {
   os << "Days: " << operand.getNumDays() << ", People: " << operand.getNumPeople() << " and they are: ";
   for (int i = 0; i < operand.getNumPeople(); i++) {
      if (i == operand.getNumPeople() - 1) {
         os << operand.getNames()[i];
      }
      else {
         os << operand.getNames()[i] << ", ";
      }
   }
   os << endl;
   return os;
}

// Implement the overloaded = operator
FamilyVacation &FamilyVacation::operator=(FamilyVacation &operand) {
   if (this == &operand) {
      return *this;
   }

   numDays = operand.numDays;
   numPeople = operand.numPeople;
   if (names != nullptr) {
      delete[] names;
      names = nullptr;
   }

   names = new string[numPeople];
   for (int i = 0; i < numPeople; i++) {
      names[i] = operand.names[i];
   }

   return *this;
}