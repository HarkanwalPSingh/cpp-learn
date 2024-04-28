// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <random>

using namespace std;

int randNum();
int askGuess();

int main() {

  int randomNumber {randNum()};
  int guess;
  bool guessed {false};
  int guessCount {0};

  while (!guessed) {
    guess = askGuess();
    guessCount ++;
    if (guess < randomNumber) {
      cout << "Low" << '\n';
    } else if (guess > randomNumber) {
      cout << "High" << '\n';
    } else {
      guessed = true;
      cout << "Number " << guess << " guessed correctly in " << guessCount << " guesses" <<'\n';
    }
  }

  return 0;
}

int randNum() {
  random_device rd;
  mt19937 gen(rd());

  uniform_int_distribution<> dis(1, 100);

  return dis(gen);
};

int askGuess() {
  cout << "Guess Number: ";
  int guess;
  cin >> guess;

  return guess;
}
