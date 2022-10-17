#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  
  // Declarations
  const int MONTHS = 12;
  double loanAmt, annualRate, monthlyRate, adjustedRate, payment;
  double amountPaidBack, interestPaid;
  int numPayments;

  // Get user input
  cout << "Enter the amount of the loan: ";
  cin >> loanAmt;

  cout << "\nEnter the annual interest rate: ";
  cin >> annualRate;

  cout << "\nEnter the number of payments: ";
  cin >> numPayments;

  // Calculation
  monthlyRate = (annualRate / MONTHS) / 100;

  adjustedRate = pow(1 + monthlyRate, numPayments);

  payment = (monthlyRate * adjustedRate) / (adjustedRate - 1) * loanAmt;

  amountPaidBack = payment * numPayments;

  interestPaid = amountPaidBack - loanAmt;

  // Output
  cout << setprecision(2) << fixed;
  cout << "Loan Amount:              $" << setw(12) << loanAmt << endl;
  cout << "Monthly Interest Rate:     " << setw(11) << monthlyRate << "%" << endl;
  cout << "Number of Payments:        " << setw(12) << numPayments << endl;
  cout << "Monthly Payment:          $" << setw(12) << payment << endl;
  cout << "Amount Paid Back:         $" << setw(12) << amountPaidBack << endl;
  cout << "Interest Paid:            $" << setw(12) << interestPaid << endl;
  
  return 0;
}
