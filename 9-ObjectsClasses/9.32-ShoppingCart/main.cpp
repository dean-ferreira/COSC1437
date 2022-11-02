/*
(1) Create three files to submit:

ItemToPurchase.h - Class declaration
ItemToPurchase.cpp - Class definition
main.cpp - main() function
Build the ItemToPurchase class with the following specifications:

Default constructor
Public class functions (mutators & accessors)
SetName() & GetName() (2 pts)
SetPrice() & GetPrice() (2 pts)
SetQuantity() & GetQuantity() (2 pts)
Private data members
string itemName - Initialized in default constructor to "none"
int itemPrice - Initialized in default constructor to 0
int itemQuantity - Initialized in default constructor to 0
(2) In main(), prompt the user for two items and create two objects of the ItemToPurchase class. Before prompting for the second item, call cin.ignore() to allow the user to input a new string. (2 pts)

Ex:

Item 1
Enter the item name:
Chocolate Chips
Enter the item price:
3
Enter the item quantity:
1

Item 2
Enter the item name:
Bottled Water
Enter the item price:
1
Enter the item quantity:
10

(3) Add the costs of the two items together and output the total cost. (2 pts)

Ex:

TOTAL COST
Chocolate Chips 1 @ $3 = $3
Bottled Water 10 @ $1 = $10

Total: $13
*/

#include <iostream>
#include <string>
#include "ItemToPurchase.h"

using namespace std;

int main() {
    int listSize {2};
    ItemToPurchase shoppingList [listSize];

    string tempName {};
    int tempPrice {}, tempQuant {};
    for (int i = 0; i < listSize; i++) {
        cout << "Item " << i + 1 << endl;
        cout << "Enter the item name:" << endl;
        getline(cin, tempName);
        shoppingList[i].SetName(tempName);
        cout << "Enter the item price:" << endl;
        cin >> tempPrice;
        shoppingList[i].SetPrice(tempPrice);
        cout << "Enter the item quantity:" << endl;
        cin >> tempQuant;
        cin.ignore();
        shoppingList[i].SetQuantity(tempQuant);
        cout << endl;
    }
    int totalCost {};
    cout << "TOTAL COST" << endl;
    for (int i = 0; i < listSize; i++) {
        cout << shoppingList[i].GetName() << " " << shoppingList[i].GetQuantity() << " @ $" << shoppingList[i].GetPrice() << " = $" << shoppingList[i].GetPrice() * shoppingList[i].GetQuantity() << endl;
        totalCost += (shoppingList[i].GetPrice() * shoppingList[i].GetQuantity());
    }
    cout << endl;
    cout << "Total: $" << totalCost << endl;
    return 0;
}
