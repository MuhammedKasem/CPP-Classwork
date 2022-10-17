#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int num1, num2;

  // Gather user Input
  cout << "Enter an integer:      " << endl;
  cin >> num1;
  cout << "Enter another integer: " << endl;
  cin >> num2;

  // Testing
  if (num1 > num2) {
    cout << num1 << " is greater than " << num2;
  }
  else if (num2 > num1){
    cout << num2 << " is greater than " << num1;
  }
  else {
    cout << "The two integers are the same! ";
  }
}
