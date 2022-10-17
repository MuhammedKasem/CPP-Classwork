// Muhammed Kasem Week 4 HW Book Points

#include <iomanip>
#include <iostream>

using namespace std;
int main() {

  // Declare variables
  int numBooks, numPoints;

  // Gather User Input
  cout << "Please enter the number of books you have purchased:" << endl;
  cin >> numBooks;

  // Determine points
  if (numBooks == 0) {
    numPoints = 0;
  } else if (numBooks == 1) {
    numPoints = 5;
  } else if (numBooks == 2) {
    numPoints = 15;
  } else if (numBooks == 3) {
    numPoints = 30;
  } else if (numBooks >= 4) {
    numPoints = 50;
  }

  // Output 
  cout << "You have earned " << numPoints << " points.";
  return 0;
}
