#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>

using namespace std;

class ItemToPurchase {
private:
    string itemName;
    int itemPrice;
    int itemQuantity;

public:
    ItemToPurchase(string _itemName = "none", int _itemPrice = 0, int _itemQuantity = 0); // constructor

    void SetName(string);
    void SetPrice(int);
    void SetQuantity(int);

    string GetName();
    int GetPrice();
    int GetQuantity();
};

#endif
