// Muhammed Kasem Week 2 Homework Property Taxes
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
  // Declare Variables
  const double assessedPercent = 0.65;
  double assessedValue, houseValue, currentTax, taxOwed;

  // Gather Inputs
  cout << "Enter the actual (market) value of the property: \n" ;
  cin >> houseValue;
  cout << "Enter the current tax rate per $100 of assessed value: \n";
  cin >> currentTax;

  // Calculations
  currentTax = currentTax / 100; // Converts the users input to a decimal so the percentage can be used.
  assessedValue = houseValue * assessedPercent;
  taxOwed = assessedValue * currentTax;

  // Output Results
  cout << setprecision(2) << fixed;
  cout << "The assessed value of your property is $" << setw(12) << assessedValue << endl;
  cout << "The amout of property tax you owe is   $" << setw(12) << taxOwed << endl;

  return 0;
}
