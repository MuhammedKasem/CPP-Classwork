#include <iomanip>
#include <iostream>

using namespace std;

void calculateEstimate(double, double, double);

int main() {

  double materialCost;
  double hoursWorked;
  double travelTime;

  cout << "Enter the cost of materials: ";
  cin >> materialCost;
  cout << "Enter the number of hours of labor: ";
  cin >> hoursWorked;
  cout << "Enter the number of hours to travel to the job site: ";
  cin >> travelTime; 



  calculateEstimate(materialCost, hoursWorked, travelTime);




  return 0;
  }

  void calculateEstimate(double materialCost, double hoursWorked, double travelTime) {

    cout << "The estimated cost of the job is $"
         << (materialCost + (hoursWorked * 35) + (travelTime * 12));
  }
