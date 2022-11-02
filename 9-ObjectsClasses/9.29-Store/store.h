//Include headers!
#include "time.h"

using namespace std;

#ifndef STORE_H
#define STORE_H

class Store {
public:
   Store(string storeName, string storeType);
   //Add constructor with opening and closing time
   Store(string storeName, string storeType, Time openTime, Time closeTime);
   int getId();
   static int getNextId();
   void printInfo();
   
private:
   string name;
   string type;
   //Add opening and closing Time variables
   Time opening;
   Time closing;
   int id = 0;
   static int nextId;   // Declare static member variable
};

#endif