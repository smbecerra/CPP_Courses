#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
   string phoneStr;       // User input: Phone number string
   unsigned int i = 0;   // Loop index, current element in phone number string
   char currChar = '_';  // Current char in phone number string
   
   cout << "Enter phone number: " << endl;
   cin >> phoneStr;
   
   cout << "Numbers only: ";
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      currChar = phoneStr.at(i);
      if (((currChar >= '0') && (currChar <= '9')) || (currChar == '-')) {
         cout << currChar; // Print element as is
      }
      else if ( ((currChar >= 'a') && (currChar <= 'c')) ||
                ((currChar >= 'A') && (currChar <= 'C')) ) {
         cout << "2";
      } else if ( ((currChar >= 'd') && (currChar >= 'f')) ||
                  ((currChar >= 'D') && (currChar >= 'F')) )
         cout << "3";
      else {
         cout << '?';
      }
   }
   
   cout << endl;

       
       
    enum GroceryItem {GR_APPLES, GR_BANANAS, GR_JUICE, GR_WATER};

   GroceryItem userItem = GR_APPLES;

   if((userItem == GR_APPLES) || (userItem == GR_BANANAS)){
      cout << "Fruit " << endl;
      }
   else if((userItem == GR_JUICE) || (userItem == GR_WATER)) {
      cout << "Drink" << endl;
      }
   else {
      cout << "Unknown" << endl;
      }

    return 0;
} 