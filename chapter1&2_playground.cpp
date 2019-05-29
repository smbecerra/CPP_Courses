#include <iostream>
#include <string>

using namespace std;

int main() {
    int wage = 15;

    cout << "Hello, ";

    cout << endl;
    
    cout << endl;
    cout << "Salary (Annual pay) is " << "= ";
    cout << wage * 40 * 50 << "."; 
    cout << endl;

    cout << endl;

    int numCars = 9;

    cout << "The number of cars is " << numCars << "." << endl;

    cout << endl;

    int numUsers = 10;

    cout << "And the number of users is " << numUsers << "." << endl;

    cout << endl;

    cout << "This is how to count: " << endl << "1\n2\n3" << endl;

    int hourlyWage = 0;
    int annualSalary = 0;

    cout << "Enter hourly wage: " << endl;
    cin >> hourlyWage; 

    annualSalary = hourlyWage * 40 * 50;
    cout << "Salary is: " << annualSalary << endl;

    int dogYears = 0;
    int humanYears = 0;

    cout << "Enter dog years: " << endl;
    cin >> dogYears;

    humanYears = 7 * dogYears;
    cout << "A " << dogYears << " year old dog is about a ";
    cout << humanYears << " year old human." << endl;

    string firstName1 = "";
    string lastName1 = "";
    string firstName2 = "";
    string lastName2 = "";

    cout << "What is the first person's first name?" << endl;
    cin >> firstName1;
    cout << "What is the first person's last name?" << endl;
    cin >> lastName1;

   cout << "What is the second person's first name?" << endl;
   cin >> firstName2;
   cout << "What is the second person's last name?" << endl;
   cin >> lastName2;

   cout << "Here are some common married-couple names:" << endl;
   cout << firstName1 << " " << lastName1 << " and " << firstName2 << " " << lastName2 << endl;
   cout << firstName1 << " and " << firstName2 << " " << lastName1 << endl;
   cout << firstName1 << " and " << firstName2 << " " << lastName2 << endl;
   cout << firstName1 << " and " << firstName2 << " " << lastName1 << "-" << lastName2 << endl; 









    return 0;
}