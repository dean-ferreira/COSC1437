#include <iostream>
#include <string>

using namespace std;

#include "Party.h"

Party::Party()
{
   //Default: 10 attendees, location = home
   location = "Home";
   maxAttendees = 10;
   numAttendees = 0;
   attendees = new string[maxAttendees];
}

//Define constructor with two parameters
Party::Party(string l, int num) {
    if (num < 1) { //If the input integer is not positive, set maxAttendees = 10
        num = 10;
    }
    location = l;
    maxAttendees = num;
    numAttendees = 0;
    attendees = new string [maxAttendees];
}
   
//Define the copy constructor
Party::Party(const Party &source) {
    location = source.location;
    maxAttendees = source.maxAttendees;
    numAttendees = source.numAttendees;
    attendees = new string[maxAttendees];
    for (int i = 0; i < numAttendees; i++) {
        attendees[i] = source.attendees[i];
    }
}

//Define the overloaded copy assignment operator (=)
Party &Party::operator=(const Party &operand) {
    if (this == &operand) {
        return *this;
    }

    location = operand.location;
    maxAttendees = operand.maxAttendees;
    numAttendees = operand.numAttendees;
    if (attendees != nullptr) {
        delete[] attendees;
        attendees = nullptr;
    }

    attendees = new string[maxAttendees];
    for (int i = 0; i < numAttendees; i++) {
        attendees[i] = operand.attendees[i];
    }

    return *this;
}

//Define the overloaded operator (+) to add an attendee
Party &Party::operator+(string newAttendee) {
    if (this->numAttendees + 1 == this->maxAttendees) {
        cout << "The party is already full!" << endl;
    }
    else {
        this->attendees[numAttendees] = newAttendee;
        this->numAttendees += 1;
    }

    return *this;
}

//Define the overloaded operator (>) to compare two parties
bool Party::operator>(const Party &operand) {
    return this->numAttendees > operand.numAttendees;
}

//Add destructor
Party::~Party() {
    delete [] attendees;
}

//The following functions are provided
//Do not change

void Party::changeAttendeeAt(string name, int pos)
{
   if(pos>=0 && pos<numAttendees)
      attendees[pos] = name;
   else
      cout << "Invalid index.";
}

void Party::print()
{
   if(numAttendees > 0)
   {
      cout << "Attendees list:\n";
      for(int i = 0; i<numAttendees; i++)
         cout << attendees[i] << endl;
   }
   else
      cout << "List is empty! Invite more people to your party.\n";
}

string Party::getAttendeeAt(int pos)
{
   if(pos>=0 && pos<numAttendees)
      return attendees[pos];
   else
      return "Invalid index.";
}

int Party::getNumAttendees() const
{  return numAttendees;  }

int Party::getMaxAttendees() const
{  return maxAttendees;  }

string Party::getLocation() const
{  return location;  }

void Party::setLocation(string new_loc)
{   location = new_loc;  }
