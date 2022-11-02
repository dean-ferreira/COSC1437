/*
Given two integers as user inputs that represent the number of drinks to buy and the number of bottles to restock, create a VendingMachine object that performs the following operations:

Purchases input number of drinks
Restocks input number of bottles
Reports inventory
Review the definition of "VendingMachine.cpp" by clicking on the orange arrow. A VendingMachine's initial inventory is 20 drinks.

Ex: If the input is:

5 2
the output is:

Inventory: 17 bottles
*/

#include <iostream>
#include "VendingMachine.h"

using namespace std;

int main() {
    int numDrinksToPurchase {}, numBottlesToRestock {};
    cin >> numDrinksToPurchase >> numBottlesToRestock;

    VendingMachine theMachine;
    theMachine.Purchase(numDrinksToPurchase);
    theMachine.Restock(numBottlesToRestock);
    theMachine.Report();
    
    return 0;
}