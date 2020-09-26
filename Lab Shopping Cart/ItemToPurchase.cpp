#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase () {
  itemName = "none";
  itemPrice = 0.0;
  itemQuantity = 0;
}

void ItemToPurchase::SetName(string name) {
  this->itemName = name;
}

string ItemToPurchase::GetName() const{
  return itemName;
}

void ItemToPurchase::SetPrice(double price) {
  this->itemPrice = price;
}

double ItemToPurchase::GetPrice() const {
  return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
  this->itemQuantity = quantity;
}

int ItemToPurchase::GetQuantity() const {
  return itemQuantity;
}
