// Muhammed Kasem Test 1
#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  // Variable Declarations
  const double dayShift = 18.50;
  const double afternoonShift = 20.00;
  const double nightShift = 23.50;
  int workedHours, retirementChoice, workedShift;
  double grossPay, netPay;
  double retirement = 0.00;

  // Menu Options
  cout << "Shift Worked\n";
  cout << "************\n";
  cout << "1. Day Shift\n";
  cout << "2. Afternoon Shift\n";
  cout << "3. Night Shift\n\n";

  // User Input
  cout << "Enter the number corresponding to the shift worked: \n";
  cin >> workedShift;
  cout << "Enter the number of hours worked: \n";
  cin >> workedHours;

  // Switch Statement & Conditionals
  switch (workedShift) {
  case 1:
    grossPay = dayShift * workedHours;
    netPay = grossPay;
    break;
  case 2:
    grossPay = afternoonShift * workedHours;
    netPay = grossPay;
    break;
  case 4:
    grossPay = nightShift * workedHours;
    netPay = grossPay;
    break;
  default:
    cout << "You have entered an invalid option!\n";
  }

  // Menu options only available for menu options 2 & 3
  if (workedShift == 2 || workedShift == 3) {
    cout << "\nDo you want to participate in the retirement plan?\n";
    cout << "1. Yes\n";
    cout << "2. No\n\n";

    cout << "Enter the number corresponding to retirement optiion you chose: \n";
    cin >> retirementChoice;
    if (retirementChoice == 1) {
      retirement = grossPay * 0.02;
      netPay -= retirement;
    }
  }
 
  // Display amounts to user
  cout << setprecision(2) << fixed;
  cout << "\nGross pay: $" << grossPay << endl;
  cout << "Retirement contribution: $" << retirement << endl;
  cout << "Net pay: $" << netPay << endl;

  return 0;
}
