// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <limits>

double calculate(double a, char op, double b);

int main(){

  std::cout << "Enter operand1, operation, operand2" << '\n';
  std::cout << "Example: 1 + 2" << '\n';
  std::string input{};
  std::getline(std::cin, input);

  std::stringstream ss(input);
  std::string token;
  std::vector<std::string> tokens;

  while (std::getline(ss, token, ' ')) {
    tokens.push_back(token);
  }

  double num1 {std::stod(tokens.at(0))};
  char op {tokens.at(1).at(0)};
  double num2 {std::stod(tokens.at(2))};

  std::cout << num1 << " " << op << " " << num2 << " = " << calculate(num1, op, num2) << '\n';

  return 0;
}

double calculate(double a, char op, double b){

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
