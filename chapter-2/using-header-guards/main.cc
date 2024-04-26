// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include "squareNumAgain.h"
#include "squareNum.h"

int main(){

  std::cout << "Enter integer: ";

  int num{};
  std::cin >> num;

  std::cout << squareNum(num) << '\n';

  return 0;
}
