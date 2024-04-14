// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <cstdlib>
#include <iostream>

int getInputFromUser() {
  std::cout << "Enter a number: ";

  int num {};
  std::cin >> num;

  return num;
}

int main() {
  int num1 {getInputFromUser()};
  int num2 {getInputFromUser()};

  std::cout << num1 << " + " << num2 << " is " << num1 + num2 << '\n';
  std::cout << num1 << " - " << num2 << " is " << num1 - num2 << '\n';

  return EXIT_SUCCESS;
}
