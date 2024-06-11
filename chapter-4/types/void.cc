// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>

void writeValue(int);
void noReturn(int);

int main() {

  void number; // Invalid

  return 0;
}

void writeValue(int x) {
  std::cout << x << '\n';
  // no return statement
}

void noReturn(int x) {
  std::cout << x << '\n';
  return x; // invalid
}
