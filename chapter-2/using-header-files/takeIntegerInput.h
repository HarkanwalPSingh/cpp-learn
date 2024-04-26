#include <iostream>

inline int takeIntegerInput(){
  std::cout << "Enter integer: ";
  int num{};
  std::cin >> num;
  return num;
}
