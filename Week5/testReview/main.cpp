#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  int choice;
  const double QUEEN_ROOM = 145.00;
  const double KING_ROOM = 155.00;
  const double KING_SUITE = 165.00;
  double viewPrice = 0.00;
  double roomPrice = 0.00;
  double totalPrice = 0.00;

  cout << "WELCOME TO THE GRAND NASH HOTEL\n\n";
  cout << "To begin your reservation, select a room type from the menu below.\n";
  cout << "Room Options\n";
  cout << "************\n";
  cout << "1. Queen Room\n";
  cout << "2. King Room\n";
  cout << "1. King Suite\n\n";
  cout << "Enter 1, 2, or 3 to make your seledtion: \n";
  cin >> choice;

  switch (choice) {
  case 1:
    roomPrice = QUEEN_ROOM;
    totalPrice = roomPrice;
    break;
  case 2:
    roomPrice = KING_ROOM;
    break;
  case 3:
    roomPrice = KING_SUITE;
    break;
  default:
    cout << "You have entered an invalid selection!";
  }

  if (choice == 2 || choice == 3) {
    cout << "Select view type from the menu below.\n\n";
    cout << "View Options\n";
    cout << "************\n";
    cout << "1: Lake View\n";
    cout << "2: Park View\n\n";
    cout << "Enter 1 or 2 to make your selection: \n";
    cin >> choice;
    if (choice == 1) {
      viewPrice = 25.00;
      totalPrice = viewPrice + roomPrice;
    } else if (choice == 2) {
      viewPrice = 15.00;
      totalPrice = viewPrice + roomPrice;
    } else
      cout << "You have entered an invalid menu option!\n";
  }

  cout << setprecision(2) << fixed << showpoint;
  cout << "\nRoom Price: " << roomPrice << endl;
  cout << "View Price: " << viewPrice << endl;
  cout << "Total Price: " << totalPrice << endl;

  return 0;
}
