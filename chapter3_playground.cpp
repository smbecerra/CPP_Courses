#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {

int numCoins;
int numNickels;
int numDimes;

numNickels = 5;
numDimes = 6;

numCoins = numNickels + numDimes;

cout << "There are " << numCoins << " coins in the piggy bank" << endl;



   double x1 = 2.0;
   double y1 = 2.0;
   double x2 = 3.0;
   double y2 = 5.0;
   double pointsDistance = 0.0;

   /* Your solution goes here  */
   double item1 = (x2 - x1);
   double item2 = (y2 - y1);

   double item1Pow = pow(item1, 2);
   double item2Pow = pow(item2, 2);
   pointsDistance = sqrt(item1Pow + item2Pow);

   cout << "Points distance: " << pointsDistance << endl;


   double treeHeight     = 0.0;
   double shadowLength   = 0.0;
   double angleElevation = 0.0;

   angleElevation = 0.11693706; // 0.11693706 radians = 6.7 degrees
   shadowLength   = 17.5;

   /* Your solution goes here  */
   treeHeight = shadowLength * tan(angleElevation);

   cout << "Tree height: " << treeHeight << endl;



   //static casting
   int numKidsA = 1;
   int numKidsB = 4;
   int numKidsC = 5;
   int numFamilies = 3;
   double avgKids = 0.0;

   /* Your solution goes here  */
    avgKids = static_cast<double>(numKidsA + numKidsB + numKidsC) / static_cast<double>(numFamilies);

    cout << "Average kids per family: " << avgKids << endl;


    



     return 0;



}