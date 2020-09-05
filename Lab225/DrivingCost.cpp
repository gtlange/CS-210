#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   /* Type your code here. */
   double milesPerGallon;
   double dollarsPerGallon;
   double gasCostTenMiles;
   double gasCostFiftyMiles;
   double gasCostFourHundredMiles;
   
   cin >> milesPerGallon;
   cin >> dollarsPerGallon;
   
   gasCostTenMiles = (10 / milesPerGallon) * dollarsPerGallon;
   gasCostFiftyMiles = (50 / milesPerGallon) * dollarsPerGallon;
   gasCostFourHundredMiles = (400 / milesPerGallon) * dollarsPerGallon;
   
   cout << fixed << setprecision(2);
   cout << gasCostTenMiles << " " << gasCostFiftyMiles << " " << gasCostFourHundredMiles << endl;

   return 0;
}
