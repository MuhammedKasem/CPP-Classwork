#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

  // Declare Variables
  int number, count = 0;
  double total, average;

  // Open file
  ifstream randomTxt;
  randomTxt.open("Random.txt");

  if (randomTxt) {
    while (randomTxt >> number) {
      count++;
      total += number;
    }
  }
  else {
    cout << "Failed to read file! Please try again!\n";
  }
  cout << setprecision(2) << fixed;
  cout << "All numbers have been successfully read from the file." << endl;
  cout << "The file contained " << count << " numbers\n";
  cout << "The sum of the numbers is " << total << endl;
  cout << "The average of the numbers is " << total / count << endl;
}
