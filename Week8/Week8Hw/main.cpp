// Rainfall Homework Muhammed Kasem
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;


int main() {

  // Declare Variables

  int count = 0;
  double totalRain, number;
  string month1, month2;

  // Declare and open the file
  ifstream rainfallFile;
  rainfallFile.open("Rainfall.txt");

  // Checks for errors opening the file and reads the months from the file
  if (rainfallFile) {
    cout << "*** Data file successfully opened ***\n\n";
  rainfallFile >> month1 >> month2;

  // Loops until the EOF to add the total of the numbers and keep the count for later use in calculating the average
  while (rainfallFile >> number) {
    totalRain += number;
    count++;
  }


  // Output
  cout << setprecision(2) << fixed;
  cout << "During the months of " << month1 << "-" << month2 << " , the total rainfall was " << totalRain << " and the average monthly rainfall was " << totalRain / count << " inches.\n\n";

  // Closing the file
  rainfallFile.close();
  cout << "*** Data file closed. ***"; 
  }
  else {
    cout << "Failed to open file!";
  }


  return 0;
}
