#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
  // Variable Declarations
  const double stateRate = 0.04;
  const double countyRate = 0.02;
  double total, sales, stateTaxes, countyTaxes, totalTax;

  cout << "\nEnter the total amount colleged for the month: ";
  cin >> total;

  // Calculations
  sales = total / 1.06;
  stateTaxes = sales * stateRate;
  countyTaxes = sales * countyRate;
  totalTax = countyTaxes + stateTaxes;

  // Output
  cout << setprecision(2) << fixed;
  cout << "Monthly Sales Report" << endl;
  cout << "------------------------------\n";
  cout << "Total collected: $" << setw(12) << total << endl;
  cout << "Sales:           $" << setw(12) << sales << endl;
  cout << "State Sales Tax  $" << setw(12) << stateTaxes << endl;
  cout << "County Sales Tax $" << setw(12) << countyTaxes << endl;
  cout << "Total Sales Tax: $" << setw(12) <<  totalTax;
  return 0;
}
