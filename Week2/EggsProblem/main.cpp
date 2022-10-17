#include <iostream>
using namespace std;

int main() {
  
  // Variables
  const double COST_PER_DOZEN = 3.25;
  const double COST_PER_SINGLE = 0.45;
  const int DOZEN = 12;

  int totalEggs;
  int dozens, singles;
  double totalCost;

  // Get user input
  cout << "Enter the total amount of eggs: ";
  cin >> totalEggs;
  
  // Calculations
  dozens = totalEggs / DOZEN;
  singles = totalEggs % DOZEN;

  totalCost = (dozens * COST_PER_DOZEN) + (singles * COST_PER_SINGLE);

  // Output
  cout << "\nYou ordered " << totalEggs << " eggs. That is " << dozens << " dozen at $" << COST_PER_DOZEN << " per dozen and "
  << singles << " single eggs at " << COST_PER_SINGLE << " cents each for a total of $" << totalCost << ".\n";

  return 0;


}
