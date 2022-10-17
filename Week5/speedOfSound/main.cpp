#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Declare Veriables
  const int AIR = 1100;
  const int WATER = 4900;
  const int STEEL = 16400;
  int choice;
  double distance, time;

  // Display menu
  cout << "Sound travels at different speeds through different mediums\n";
  cout << "Select a medium from the menu below" << endl;
  cout << "\t\n1: Air " << endl;
  cout << "\t\n2: Water" << endl;
  cout << "\t\n3: Steel" << endl << endl;
  cout << "\tEnter your choice (1-4): ";

  cin >> choice;

  if (choice < 1 || choice > 3)
    cout << "\nInvalid menu entry. \n\n";
  else {
    cout << "\nEnter the distance the sound will travel (in feet): ";
    cin >> distance;
    if (distance >= 0) {
      switch (choice) {
      case 1:
        time = distance / AIR;
        break;
      case 2:
        time = distance / WATER;
        break;
      case 3:
        time = distance / STEEL;
      }
      cout << setprecision(4) << fixed;
      cout << "\nIt took " << time << " for the sound to travel that distance.";
    } else {
      cout << "Distance must be greater than 0";
    }
  }
  return 0;
}
