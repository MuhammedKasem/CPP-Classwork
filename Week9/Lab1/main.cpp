#include <iostream>
#include <iomanip>

using namespace std;

double calculateRetail(double, double);

int main() {

  double cost, percentage, price;

  cout << "Enter the items's wholesale cost:\n"; 
  cin >> cost;
  cout << "Enter the markup as a percentage: \n";
  cin >> percentage;


  price = calculateRetail(cost, percentage);

  cout << setprecision(2) << fixed;
  cout << "\nThe retail price of this item is $" << price;
  return 0;

}


  double calculateRetail(double cost, double percentage) {
    return (cost * (percentage / 100 + 1));
  }
