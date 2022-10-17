#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  // Declarations
  const int STOCKSPURCHASED = 1000;
  const double PRICEPAID = 288.09;
  const double COMMISION = 0.02;
  const double SOLDPRICE = 291.13;

  // Calculations
  double initialTotal = (STOCKSPURCHASED * PRICEPAID);
  double initialCommision = (initialTotal * COMMISION);

  double soldValue = SOLDPRICE * STOCKSPURCHASED;
  double soldCommision = soldValue * COMMISION;
  double profit = (soldValue - initialTotal) - (initialCommision + soldCommision);

  // Output
  cout << setprecision(2) << fixed;
  cout << "Stock Transaction Summary" << endl;
  cout << "-------------------------" << endl;
  cout << "Purchase Price:         $" << setw(12) << initialTotal << endl;
  cout << "Purchase Commision:     $" << setw(12) << initialCommision << endl;
  cout << "Sale Price:             $" << setw(12) << soldValue << endl;
  cout << "Sale Commision:         $" << setw(12) << soldCommision << endl;
  cout << "Profit:                 $" << setw(12) << profit << endl;

  return 0;
}
