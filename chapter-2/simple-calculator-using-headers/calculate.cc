// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <limits>
#include <tuple>
#include "calculate.h"

double calculate(const std::tuple<double, char, double>& tokens) {
  auto [a, op, b] = tokens;

  if(op == '+'){
    return a + b;
  };
  if(op == '-'){
    return a - b;
  };
  if(op == '*'){
    return a * b;
  };
  if(op == '/'){
    if (b == 0) {
      return std::numeric_limits<double>::infinity();
    }
    return a / b;
  };

  return 0;
}

std::tuple<double, char, double> splitInput(std::vector<std::string> input) {
  return std::make_tuple(
    std::stod(input.at(0)),
    input.at(1).at(0),
    std::stod(input.at(2))
  );
}

std::tuple<double, char, double> input() {

  std::string input;
  std::getline(std::cin, input);

  std::stringstream ss(input);
  std::string token;
  std::vector<std::string> tokens;

  while (std::getline(ss, token, ' ')) {
    tokens.push_back(token);
  }

  return splitInput(tokens);
}
