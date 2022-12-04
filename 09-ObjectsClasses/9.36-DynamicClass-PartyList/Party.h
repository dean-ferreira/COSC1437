#ifndef PARTY_H
#define PARTY_H

class Party
{
   private:
      string location;
      string *attendees;
      int maxAttendees;
      int numAttendees;
      
   public:
      Party(); 
      Party(string l, int num); //Constructor
      Party(const Party &source);    //Copy constructor
      Party& operator=(const Party &operand);
      ~Party(); //TODO: Add destructor
      Party& operator+(string newAttendee); //TODO: Add operator + to add a person to the party
      bool operator>(const Party &operand); //TODO: Add operator > to compare two parties

      void changeAttendeeAt(string name, int pos);  
      void print();
      string getAttendeeAt(int pos);
      int getMaxAttendees() const;
      int getNumAttendees() const;
      string getLocation() const;
      void setLocation(string);
};

#endif