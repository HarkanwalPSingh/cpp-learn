// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>

int getNumFromUser() {
  std::cout << "Enter a number: ";
  int num {};
  std::cin >> num;

  return num;
}

int doubleNum(int num) { return num * 2; }

int main() {
  int num {getNumFromUser()};
  std::cout << "Double of " << num << " is: " << doubleNum(num) << '\n';
  return 0;
}
