// Week 1 Homework Muhammed Kasem Restaurant Bill Assignment
#include <iostream>
using namespace std;

int main() {
  
  // Variable Declarations
  double tax = 0.0625;
  double restBill = 57.50;
  double tip = 0.15;
  double taxAmount = restBill * tax;
  double tipAmount = (taxAmount + restBill) * tip;
  double total = restBill + taxAmount + tipAmount;

  // Output Statements
  cout << "Bill: $" << restBill << endl;
  cout << "Tax: $" << taxAmount << endl;
  cout << "15% Tip: $" << tipAmount << endl;
  cout << "Total: $" << total << endl;
  return 0;
}


