// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <tuple>
#include "calculate.h"

int main() {
  std::cout << "Enter calculate expression, example: 1 + 2" << '\n';
  std::tuple<double, char, double> tokens {input()};

  double result {calculate(tokens)};
  std::cout << result << '\n';
  return 0;
}
