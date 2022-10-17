#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  // Decclare Variables
  const double PI = 3.14159;
  int choice, radius, length, width, base, height;
  double area;

  // Display menu
  cout << "Geometry Calculator\n";
  cout << "\t1. Calculate the area of a circle" << endl;
  cout << "\t2. Calculate the area of a Rectangle" << endl;
  cout << "\t3. Calculate the area of a circle" << endl;
  cout << "\t4. Quit\n\n";
  cout << "\tEnter your choice (1-4): ";

  // Get user input
  cin >> choice;

  // Format for our output
  cout << setprecision(2) << fixed << showpoint;

  // Switch statement

  switch (choice) {
  case 1:
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    if (radius >= 0) {
      area = PI * pow(radius, 2);
      cout << "The area of the circle is " << area << endl << endl;
    } else {
      cout << "The radius cannot be negative!\n\n";
    }
    break;

  case 2:
    cout << "\nEnter the length of the reactanle: ";
    cin >> length;
    cout << "\nEnter the width of the rectangle: ";
    cin >> width;
    if (length >= 0 && width >= 0) {
      area = length * width;
      cout << "The area of the rectangle is " << area << endl << endl;
    } else {
      cout << "Length and width cannot be negative! ";
    }
  case 3:
    cout << "\nEnter the base of the triangle: " << endl;
    cin >> base;
    cout << "\nEnter the height of the triangle: " << endl;
    cin >> height;
    if (base >= 0 && height >= 0) {
      area = base * height * 0.5;
      cout << "The area of the triangle is " << area << endl << endl;
    } else {
      cout << "Base and height cannot be negative! ";
    }
    break;
  case 4:
    return 0;
    break;
  default:
    cout << "\nYou made an invalid entry\n\n";
  }
    return 0;
}
