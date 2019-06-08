#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include<vector>
using namespace std;

int main() {
   vector<int> oldestPeople(5);  
   int nthPerson;               // User input, Nth oldest person

   oldestPeople.at(0) = 122; // Died 1997 in France
   oldestPeople.at(1) = 119; // Died 1999 in U.S.
   oldestPeople.at(2) = 117; // Died 1993 in U.S. 
   oldestPeople.at(3) = 117; // Died 1998 in Canada
   oldestPeople.at(4) = 116; // Died 2006 in Ecuador

   cout << "Enter N (1..5): ";
   cin  >> nthPerson;

   if ((nthPerson >= 1) && (nthPerson <= 5)) {
      cout << "The " << nthPerson << "th oldest person lived ";
      cout << oldestPeople.at(nthPerson - 1) << " years." << endl;
   }
   else {
       cout << "You didn't follow instructions, silly. Try again!" << endl;
   }


   vector<int> runTimes(5);
   runTimes.at(0) = 800;
   runTimes.at(1) = 775;
   runTimes.at(2) = 900;
   runTimes.at(3) = 1;
   runTimes.at(4) = 232;

   for (int i = 0; i < 3; i++) {
       cout << runTimes.at(i) << endl;
   }


    const int NUM_VALS = 8;
    vector<int> userVals(NUM_VALS);
    int a = 0;
    int maxVal =0;

    cout << "Enter " << NUM_VALS << " integer numbers..." << endl;
    for (a = 0; a < NUM_VALS; ++a) {
        cout << "Value: ";
        cin >> userVals.at(a);
    }

    maxVal = userVals.at(0);
    for (a = 0; a < NUM_VALS; ++a){
        if (userVals.at(a) > maxVal) {
            maxVal = userVals.at(a);
        }
    }
    cout << "Max: " << maxVal << endl;
    
    const int NUM_ELEMENTS = 4;
    vector<int> userValues (NUM_ELEMENTS);
    int b = 0;

    userValues.at(0) = -1;
    userValues.at(1) = 4;
    userValues.at(2) = -6;
    userValues.at(3) = 7;

     for (b = 0; b < NUM_ELEMENTS; ++b) {
      if (userValues.at(b) < 0) {
         userValues.at(b) = -1 * userValues.at(b);
      }
      cout << userValues.at(b) << endl;
   }


    vector<int> tempReadings(3);
   int newValue = 0;
   unsigned int c = 0;

   tempReadings.at(0) = 53;
   tempReadings.at(1) = 57;
   tempReadings.at(2) = 60;

   newValue = 67;

   /* Your solution goes here  */
   tempReadings.push_back(newValue);

   for (c = 0; c < tempReadings.size(); ++c) {
      cout << tempReadings.at(c) << " ";
   }
   cout << endl;

      vector<int> ticketList(3);
   unsigned int i = 0;

   ticketList.at(0) = 5;
   ticketList.at(1) = 100;
   ticketList.at(2) = 12;

   /* Your solution goes here  */
   ticketList.pop_back();

   for (i = 0; i < ticketList.size(); ++i) {
      cout << ticketList.at(i) << " ";
   }
   cout << endl;


   vector<int> mpgTracker(3);

   mpgTracker.at(0) = 17;
   mpgTracker.at(1) = 19;
   mpgTracker.at(2) = 20;

   /* Your solution goes here  */
   cout << "Last mpg reading: " << mpgTracker.back();
   cout << endl;

   
   
   

    return 0;
}