/* Copyright 2018 */

// Include the C standard system library cstdlib, for random number generation
// Introduce qualified names for rand and srand into scope

// Include the C time system lib for time function
#include <ctime>
// Introduce qualified name for time into scope to get current time

// Include the iostream system lib

// Introduce qualified names for cin, cout, and endl

int main(int argc, char *argv[]) {
  // Seed random number generator with current time
  srand(time(nullptr)); // see doc for parameter explanation
  // Generate a random number in [1, 100].

  int guess; // integer to hold guess
  // Pompt user to guess a number between 1 and 100
  // Get input from standard input stream

  // Until the user correctly guesses the number, give high/low hints and prompt
  // for another guess.

  // Inform the user of a correct guess

  return 0;
}
