// Muhammed Kasem Week 5 Homework Pennies

#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  // Variable Declarations
  int days;
  double salary = 0.01;

  // Get User Input
  cout << "\nHow many days have you worked?\n";
  cin >> days;

  // This if statement validates that the days worked is atleast 1
  if (days >= 1) {
    cout << "\nDays" << setw(12) << "Salary\n";
    cout << "-------------------\n";

    // For Loop
    for (int i = 1; i <= days; i++) {
      cout << i << setw(12) << "$" << salary << endl;
      salary = 0.01 + (salary * 2);
    }
  }
  else {
    cout << "\nThis entry is invalid. Please try again.\n";
  }

  return 0;
}
