#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int startingNum = 1;
  int endingNum;
  int total;

  cout << "Enter the starting number: ";
  cin >> endingNum;

  while (endingNum < 0) {
    cout << "Invalid entry: please enter a positive integer: ";
    cin >> endingNum;
  }


  while (startingNum <= endingNum) {
    total += startingNum;
    startingNum++;
  }

  cout << "The total of all the numbers between 1" <<  " and " << endingNum << " is " << total << endl << endl;
}
