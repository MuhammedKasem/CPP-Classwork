#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  const int MAX = 899;
  const int MIN = 100;

  // Stores system time into seed
  unsigned seed = time(0);

  int num1, num2, sum, userAnswer;

  // Seed the generator
  srand(seed);

  // Get the two random numbers
  num1 = MIN + (rand() % MAX);
  num2 = MIN + (rand() % MAX);
  sum = num1 + num2;

  cout << setw(5) << num1 << endl
       << "+" << setw(4) << num2 << endl
       << "-------" << endl
       << endl;

  cout << "Enter your answer: ";
  cin >> userAnswer;

  cout << setw(5) << num1 << endl
       << "+" << setw(4) << num2 << endl
       << "-------" << endl
       << setw(5) << userAnswer << endl
       << endl;

  if (userAnswer == sum) {
    cout << "Your guess was correct!" << endl;
  }
  else {
    cout << "Your guess is incorrect!" << endl;
  }

  cout << "The correct answer is " << sum << endl << endl;

  return 0;
}
