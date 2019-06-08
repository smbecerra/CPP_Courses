
#include <iostream>
using namespace std;



int main() {
   int goalscorerA = 0;              // First goalscorer to compare
   int goalscorerB = 0;              // Second goalscorer to compare 
   int goals[3][3]; // Goal differences array
   
   goals[0][0] = 0;
   goals[0][1] = 1;  // Ronaldo-Messi
   goals[0][2] = 2; // Messi-Zlatan
   goals[1][0] = 3;  // Messi-Ronaldo
   goals[1][1] = 4;
   goals[1][2] = 5; // Messi-Zlatan
   goals[2][0] = 6; // Zlatan-Ronaldo
   goals[2][1] = 7; // Zlatan-Messi
   goals[2][2] = 8;
   
   cout << "0: Ronaldo  1: Messi  2: Zlatan" << endl;
   
   cout << "Enter goalscorer pair. Use 0 for Ronaldo, 1 for Messi, 2 for Zlatan -- ";
   cin >> goalscorerA;
   cin >> goalscorerB;
   
   cout << "Difference: " << goals[goalscorerA][goalscorerB];
   cout << " goals." << endl;
   
   return 0;
}