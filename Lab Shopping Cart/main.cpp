#include <iostream>


using namespace std;

#include "ItemToPurchase.h"

int main() {
   
  ItemToPurchase item1;
  ItemToPurchase item2;

  string stringInput; 
  double doubleInput;
  int integerInput;

  
  cout << "Item 1" << endl;
  cout << "Enter the item name:" << endl;
  getline(cin, stringInput);
  item1.SetName(stringInput);
  cout << "Enter the item price:" << endl;
  cin >> doubleInput;
  item1.SetPrice(doubleInput);
  cout << "Enter the item quantity:" << endl;
  cin >> integerInput;
  item1.SetQuantity(integerInput);

  cin.ignore(); 

  
  cout << "\nItem 2" << endl;
  cout << "Enter the item name:" << endl;
  getline(cin, stringInput);
  item2.SetName(stringInput);
  cout << "Enter the item price:" << endl;
  cin >> doubleInput;
  item2.SetPrice(doubleInput);
  cout << "Enter the item quantity:" << endl;
  cin >> integerInput;
  item2.SetQuantity(integerInput);

  cout << "\nTOTAL COST" << endl; 
  
  cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetQuantity() * item1.GetPrice() << endl;
  cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetQuantity() * item2.GetPrice() << endl;
  cout << endl;
  cout << "Total: $" << (item1.GetQuantity() * item1.GetPrice()) + (item2.GetQuantity() * item2.GetPrice()) << endl;

   
   return 0;
}
