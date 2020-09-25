#include <iostream>
#include <vector>
#include <algorithm> // used for the sort function
using namespace std;

void SortVector(vector<int>& myVec) {
   unsigned int i;
   
   for (i = 0; i < myVec.size(); ++i) {
      sort(myVec.begin(), myVec.end());
      cout << myVec.at(i) << " ";
      }
   }


int main() {
   vector<int> myVec; // empty Vector
   int numItems; // First number declares vector size
   
   unsigned int i;
   
   cin >> numItems;
   myVec.resize(numItems);
   
   for (i = 0; i < myVec.size(); ++i) { // populate vector
      cin >> myVec.at(i);
   }
   
   
   
   SortVector(myVec);
   cout << endl;

   return 0;
}
