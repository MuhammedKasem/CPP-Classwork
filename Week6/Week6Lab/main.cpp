#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  // Declare Variables
  int speed, hours, count;
  double distance;

  cout << "What is the speed of the vehicle in MPH?\n";
  cin >> speed;
  cout << "How many hours has it traveled?\n";
  cin >> hours;

  while (speed < 0 || hours < 1) {
    cout << "Invalid Entry Please Try again!\n\n";
    cout << "What is the speed of the vehicle in MPH?\n";
    cin >> speed;
    cout << "How many hours has it traveled?\n";
    cin >> hours;
  }

  cout << "Hour" << setw(20) << "Distance Traveled\n";
  cout << "-----------------------------\n";

  for (int count = 1; count <= hours; count++) {
    distance = (speed * count);
    cout << endl << count << setw(10) << distance << endl;
  }
  return 0;
}
