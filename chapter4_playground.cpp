#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {

    const int PRICE_LESS_THAN_25 = 4800; 
    const int PRICE_25_AND_UP = 2200;
    int userAge = 0;
    int insurancePrice = 0;

    cout << "Enter age: ";
    cin >> userAge; 

    if (userAge < 25) {
        insurancePrice = PRICE_LESS_THAN_25;
        cout << "(executed first branch)" << endl;
    }
    else {
        insurancePrice = PRICE_25_AND_UP;
        cout << "(executed second branch)" << endl;
    }

    cout << "Annual price: $" << insurancePrice << endl;

    
/* 
Write an if-else statement for the following: 
If userTickets is less than 5, execute numTickets = 1. Else, execute numTickets = userTickets. 
Ex: if userTickets is 3, then numTickets = 1. 
*/

int numTickets = 0;
int userTickets = 3;

if (userTickets < 5) {
    numTickets = 1;
}
else {
    numTickets = userTickets;
}

cout << numTickets << endl;


int givenYear = 0;
givenYear = 1776;


if (givenYear >= 2100) {
    cout << "Distant future" << endl;
}
else if (givenYear >=2000) {
    cout << "21st century" << endl;
}
else if (givenYear >= 1900) {
    cout << "20th century" << endl;
}
else {
    cout << "Long ago" << endl;
}

int ageOfUser = 0;
ageOfUser = 19;

if ((ageOfUser >= 18) && (ageOfUser >= 25)){
    cout << "Eligible" << endl;
}
else {
    cout << "Ineligible" << endl;
}


int dogAgeYears = 0;

cout << "Enter dog's age (in years):";
cin >> dogAgeYears;

switch (dogAgeYears) {
    case 0:
    cout << "That's 0..14 human years." << endl;
    break;

    case 1:
    cout << "That's 15 human years." << endl;
    break;

    case 2:
    cout << "That's 24 human years." << endl;
    break;
}


char origLetter = '?';
origLetter = 'a';

switch(origLetter) {
    case 'a':
    case 'A':
    cout << "Alpha" << endl;
    break;

    case 'b':
    case 'B':
    cout << "Beta" << endl;
    break;
}

bool isRed = false;
bool isBalloon = false;

   /* Your solution goes here  */
   if (isBalloon == true && isRed == false) {
      cout << "Balloon";
      }
   else if (isBalloon == true && isRed == true) {
      cout << "Red balloon";
      }
   else {
      cout << "Not a balloon";
      }
   cout << endl;



   string firstString;
   string secondString;

   firstString = "rabbits";
   secondString = "capes";

     if (firstString < secondString){
      cout << firstString << " " << secondString << endl;
   }
   else{
      cout << secondString << " " << firstString << endl;
   }


   string userInput;
   int stringSize = 0;

   userInput = "Hello";

   stringSize = userInput.length();

   cout << "Size of userInput: " << stringSize << endl;


   string userInputTwo;
   char firstLetter = '-';

   userInput = "banana";
   firstLetter = 'b';

   if (userInput.at(0) == firstLetter) {
       cout << "Found match: " << firstLetter << endl;
   }
   else {
       cout << "No match: " << firstLetter << endl;
   }

   string userInputThree;
   userInputThree = "That darn cat.";

   int isPresent = userInputThree.find("darn");

   if (isPresent > 0) {
       cout << "Censored" << endl;
   }
   else {
       cout << userInputThree << endl;
   }

    string userText = "You have many gifts";
    userText.replace(9, 4, "a plethora of");
    cout << userText << endl;

return 0;
}