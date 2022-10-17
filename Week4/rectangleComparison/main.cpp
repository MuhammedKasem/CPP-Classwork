#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  // Declare Variables
  int length, width;
  int areaRec1, areaRec2;

  // Get the users input and calculate first rectangle
  cout << "Enter the length and width of Rectanle 1: ";
  cin >> length >> width;
  
  areaRec1 = length * width;

  
  cout << "Enter the length and width of Rectanle 2: ";
  cin >> length >> width;

  areaRec2 = length * width;

  if (areaRec1 > areaRec2 ) {
    cout << "Rectangle 1 has the greater area. \n";
  }
  else if (areaRec1 < areaRec2) {
    cout << "Rectangle 2 has the greater area. \n";
  }
  else {
    cout << "The two rectangles have the same area. \n";
  }
  return 0;
}
