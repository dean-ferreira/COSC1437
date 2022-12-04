#include <iostream>
#include <string>

using namespace std;

#include "store.h"

Store::Store(string storeName, string storeType) {
   name = storeName;
   type = storeType;
   Time openTime(9, 0);
   opening = openTime;
   Time closeTime(17, 0);
   closing = closeTime;
   id = nextId;       // Assign object id with nextId
   
   ++nextId;         // Increment nextId for next object to be created
}

Store::Store(string storeName, string storeType, Time openTime, Time closeTime) {
   name = storeName;
   type = storeType;
   opening = openTime;
   closing = closeTime;
   id = nextId;       // Assign object id with nextId
   
   ++nextId;         // Increment nextId for next object to be created
}

int Store::getId() {
   return id;
}

int Store::getNextId() {
   return nextId;
}

void Store::printInfo() {
   cout << "Store name: " << name << endl;
   cout << "Store type: " << type << endl;
   cout << "Store ID: " << id << endl;
   cout << "Opens at: " << opening.getHours() << " hours and " << opening.getMinutes() << " minutes.\n";
   cout << "Closes at: " << closing.getHours() << " hours and " << closing.getMinutes() << " minutes.\n";
}

int Store::nextId = 101;   // Define and initialize static data member

