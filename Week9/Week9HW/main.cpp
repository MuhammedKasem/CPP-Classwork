// Shipping Charges Homework Muhammed Kasem
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void calculateShipping(int, int);
int main() {

  // Declare Variables
  int weight, distance;

  // Loop that continues
  do {
    // Get User Input
    cout << "\nEnter the package weight in pounds (enter 0 to end)\n";
    cin >> weight;
    cout << "Enter the distance the package will travel in miles: \n";
    cin >> distance;

    // Call the function with the users input as parameters only if weight is
    // valid;
    if (weight > 0)
      calculateShipping(weight, distance);

  } while (weight != 0);

  return 0;
}

void calculateShipping(int pounds, int miles) {
  double rate;

  if (pounds <= 1) {
    rate = 3.10;
  } else if (pounds > 1 && pounds < 3) {
    rate = 4.20;
  } else if (pounds > 3 && pounds < 5) {
    rate = 5.30;
  } else if (pounds < 5) {
    rate = 6.40;
  }

  int numUnitsTraveled = ceil(miles / 500.00);

  double shippingCost = numUnitsTraveled * rate;
  cout << setprecision(2) << fixed;
  cout << "The cost to ship the package is $" << shippingCost << endl;
}
