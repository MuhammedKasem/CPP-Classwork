// Program: Grand Nash Hotel with do-while loops

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // Declare constants
  const double QUEEN_PRICE = 145.00;
  const double KING_PRICE = 155.00;
  const double SUITE_PRICE = 165.00;
  const double LAKE_PRICE = 25.00;
  const double PARK_PRICE = 15.00;

  // Declare menu constants
  const int QUEEN_MENU = 1;
  const int KING_MENU = 2;
  const int SUITE_MENU = 3;
  const int LAKE_MENU = 1;
  const int PARK_MENU = 2;

  // Declare other variables
  int roomChoice = 0;
  int viewChoice = 0;
  double roomPrice = 0.00;
  double viewPrice = 0.00;
  double totalPrice = 0.00;

  // Show a menu to the user to get the room choice
  cout << "WELCOME TO THE GRAND NASH HOTEL" << endl << endl;
  cout << "To begin your reservation, select a room type from the menu below."
       << endl
       << endl;

  cout << "Room Options" << endl;
  cout << "************" << endl;
  cout << "1: Queen Room" << endl;
  cout << "2: King Room " << endl;
  cout << "3: King Suite" << endl << endl;

  // Loop to prompt user until a valid menu option is entered.
  do {
    cout << "Enter 1, 2, or 3 to make your selection: ";
    cin >> roomChoice;

    // if statement to set the room price based on the menu item selected
    if (roomChoice == 1)
      roomPrice = QUEEN_PRICE;
    else if (roomChoice == 2)
      roomPrice = KING_PRICE;
    else if (roomChoice == 3)
      roomPrice = SUITE_PRICE;
    else {
      cout << endl
           << "You entered an invalid option. Please try again." << endl;
      roomPrice = 0.00;
    }
  } while (roomChoice < 1 || roomChoice > 3);

  // if statement and menu for view if room type was King Room or King Suite
  if (roomChoice == 2 || roomChoice == 3) {
    cout << endl << "Select view type from the menu below." << endl << endl;
    cout << "View Options" << endl;
    cout << "************" << endl;
    cout << "1: Lake View" << endl;
    cout << "2: Park View" << endl << endl;

    // Loop to prompt user until a valid menu option is entered.
    do {
      cout << "Enter 1 or 2 to make your selection: ";
      cin >> viewChoice;

      // if statement to set the view price based on the menu item selected
      if (viewChoice == 1)
        viewPrice = LAKE_PRICE;
      else if (viewChoice == 2)
        viewPrice = PARK_PRICE;
      else {
        cout << endl
             << "You entered an invalid option. Please try again." << endl;
        viewPrice = 0.00;
      }
    } while (viewChoice < 1 || viewChoice > 2);
  } else
    viewPrice = 0.00;

  // Calculate total and print the final output
  // Notice an if statement is used to only print the output
  // if a valid room type was selected
  if (roomChoice >= 1 && roomChoice <= 3) {
    // Calculate total
    totalPrice = roomPrice + viewPrice;

    // Format numeric output to 2 decimals
    cout << setprecision(2) << fixed << showpoint;

    // Show output
    cout << "\nRoom price: $" << roomPrice << endl;
    cout << "View price: $" << viewPrice << endl;
    cout << "Total price $" << totalPrice << endl << endl;
  }

  return 0;
}
