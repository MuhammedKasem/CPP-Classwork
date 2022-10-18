#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {

  // Declare variables
  int randomNum, userGuess, numGuesses = 0;
  const int MAX = 100;
  const int MIN = 1;

  // Generate random number
  unsigned seed = time(0);
  srand(seed);

  randomNum = MIN + (rand() % MAX);

  // Get user input

  // Loop
  do {
    cout << "Guess a number between 1 and 100: ";
    cin >> userGuess;
    numGuesses++;

    if (userGuess > randomNum)
      cout << "Your guess was too high. Try again." << endl;
    else if (userGuess < randomNum)
      cout << "Your guess was too low. Try again." << endl;
    else {
      cout << "CONGRATULATIONS! You guessed the number." << endl;
      cout << "It took you " << numGuesses << " guesses." << endl;
    }
  } while (userGuess != randomNum);

  return 0;
}
