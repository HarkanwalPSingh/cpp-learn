// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>

int addNums(int, int, int);
int getInteger();

int main() {

  int num1 {getInteger()};
  int num2 {getInteger()};
  int num3 {getInteger()};

  std::cout << addNums(num1, num2, num3) << '\n';
  return 0;
}
