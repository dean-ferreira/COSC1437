#include <iostream>
#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(string _itemName, int _itemPrice, int _itemQuantity) : itemName {_itemName}, itemPrice {_itemPrice}, itemQuantity {_itemQuantity} {

}

void ItemToPurchase::SetName(string _itemName) {
    itemName = _itemName;
}

void ItemToPurchase::SetPrice(int _itemPrice) {
    itemPrice = _itemPrice;
}

void ItemToPurchase::SetQuantity(int _itemQuantity) {
    itemQuantity = _itemQuantity;
}

string ItemToPurchase::GetName() {
    return itemName;
}

int ItemToPurchase::GetPrice() {
    return itemPrice;
}

int ItemToPurchase::GetQuantity() {
    return itemQuantity;
}
