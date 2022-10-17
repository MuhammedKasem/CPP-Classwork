#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // Declarations
  int numPennies, numNickels, numDimes, numQuarters, totalValue;
  const int PENNY = 1;
  const int NICKEL = 5;
  const int DIME = 10;
  const int QUARTER = 25;

  // Gather user input
  cout << "Let's see if you can guess the correct change to make $1! " << endl;

  cout << "Enter the number of pennies: " << endl;
  cin >> numPennies;
  cout << "Enter the number of nickels: " << endl;
  cin >> numNickels;
  cout << "Enter the number of dimes: " << endl;
  cin >> numDimes;
  cout << "Enter the number of quarters: " << endl;
  cin >> numQuarters;

  // Calculations & Testing
  totalValue = (numPennies * PENNY) + (numNickels * NICKEL) +
               (numDimes * DIME) + (numQuarters * QUARTER);

  if (totalValue == 100) {
    cout << "Congratulations! Your coins added up to $1!";
  } else if (totalValue > 100) {
    cout << "Oops! You entered too much!";
  } else {
    cout << "Oops! You entered too little! ";
  }
}
