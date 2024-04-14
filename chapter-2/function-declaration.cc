// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>

int getUserInput();
int addNums(int, int);

int main() {

  int num1 {getUserInput()};
  int num2 {getUserInput()};

  std::cout << num1 << " + " << num2 << " = " << addNums(num1, num2) << '\n';

  return 0;
}

int getUserInput() {
  std::cout << "Enter a number: ";
  int num {};
  std::cin >> num;

  return num;
}

int addNums(int num1, int num2) { return num1 + num2; }
