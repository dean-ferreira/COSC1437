#include <iostream>
#include <cstring>
using namespace std;

#ifndef FamilyVacation_h
#define FamilyVacation_h

class FamilyVacation {
   public:
      FamilyVacation(); //define the default constructor
      FamilyVacation(int days, int people, string* _names); //define an overloaded constructor
      FamilyVacation(const FamilyVacation &source); //Copy constructor
      ~FamilyVacation();
      void  setNumDays(int dayCount);
      void  setNumPeople(int peopleCount);
      void  setNames(string *, int);
      int   getNumDays();
      int   getNumPeople();
      string *getNames();
      
      
      //Declare overloaded operators
      FamilyVacation operator+(int );
      FamilyVacation operator+(FamilyVacation );
      bool operator==(FamilyVacation &operand);
      FamilyVacation& operator= (FamilyVacation &); //must be a member function !!!
      
      //Note that overloaded << CANNOT be declared as a member of the class!!!!!!
      friend ostream & operator << (ostream & o, FamilyVacation v);
   private:
      int   numDays;
      int   numPeople;
      string *names;
};

#endif /*FamilyVacation.h*/