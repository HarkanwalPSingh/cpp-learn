// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include "addNums.h"
#include "takeIntegerInput.h"

int main(){

  int num1 {takeIntegerInput()};
  int num2 {takeIntegerInput()};

  std::cout << add(num1, num2) << '\n';

  return 0;
}
