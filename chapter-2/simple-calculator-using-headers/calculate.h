#ifndef CALCULATE
#define CALCULATE
#include <string>
#include <vector>
#include <tuple>

double calculate(const std::tuple<double, char, double>&);
std::tuple<double, char, double> splitInput(std::vector<std::string>);
std::tuple<double, char, double> input();

#endif
